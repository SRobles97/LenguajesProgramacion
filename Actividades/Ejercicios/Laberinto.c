#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

int laberinto[5][5];
int vidas = 3;
int choques = 0;
int x = 4, x1 = 0;
int y = 4, y1 = 0;
int ejeX;
int ejeY;
char tecla;
int win = 0;

void llenarMatriz(int matriz[5][5]){
	srand(time(NULL));
	int i, j;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			matriz[i][j] = rand() % 2;			
		}
	}
	matriz[0][0] = 2;
	matriz[4][4] = 0;
}

void mostrarMatrice(int matriz[5][5]){
	int i = 0, j = 0;
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			gotoxy(j,i);printf("%d",laberinto[i][j]);
		}
	}
}

void gotoxy(int x,int y){  
      HANDLE hcon;  
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);  
      COORD dwPos;  
      dwPos.X = x;  
      dwPos.Y= y;  
      SetConsoleCursorPosition(hcon,dwPos);  
 } 
 
void juego(){
	do{		
	mostrarMatrice(laberinto);	
	gotoxy(0,0);printf("T");    
	gotoxy(10,0);printf("Vidas: %d Choques: %d",vidas,choques);    
	gotoxy(10,1);printf("x: %d y: %d",x,y);  
	gotoxy(x,y);printf(".");
	tecla = getch();
	switch(tecla){
		case 'a' : x--; break;
		case 's' : y++; break;
		case 'd' : x++; break;
		case 'w' : y--; break;
	}
	ejeX = y+1;
	ejeY = x;
	if(laberinto[y][x] == 1){
		choques++;
		vidas--;
	}else if(laberinto[y][x] == 2){
		win = 1;
	}
	system("cls");
	}while(vidas > 0 && win == 0);	
	
	if(win == 1){
		printf("WINS");		
	}else{
		printf("GAME OVER");
	}	
}




void main(){
	llenarMatriz(laberinto);
	juego();
}






