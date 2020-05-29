#include <stdio.h>

void main(){
	int numero = preguntarNumeroRango("Ingrese el numero que desea convertir en numeracion Romana",1,3999);
while(numero != 0)
    {
        if (numero >= 1000)       // 1000 - m
        {
           printf("M");
           numero -= 1000;
        }
 
        else if (numero >= 900)   // 900 -  cm
        {
           printf("CM");
           numero -= 900;
        }        
 
        else if (numero >= 500)   // 500 - d
        {           
           printf("D");
           numero -= 500;
        }
 
        else if (numero >= 400)   // 400 -  cd
        {
           printf("CD");
           numero -= 400;
        }
 
        else if (numero >= 100)   // 100 - c
        {
           printf("C");
           numero -= 100;                       
        }
 
        else if (numero >= 90)    // 90 - xc
        {
           printf("XC");
           numero -= 90;                                              
        }
 
        else if (numero >= 50)    // 50 - l
        {
           printf("L");
           numero -= 50;                                                                     
        }
 
        else if (numero >= 40)    // 40 - xl
        {
           printf("XL");           
           numero -= 40;
        }
 
        else if (numero >= 10)    // 10 - x
        {
           printf("X");
           numero -= 10;           
        }
 
        else if (numero >= 9)     // 9 - ix
        {
           printf("IX");
           numero -= 9;                         
        }
 
        else if (numero >= 5)     // 5 - v
        {
           printf("V");
           numero -= 5;                                     
        }
 
        else if (numero >= 4)     // 4 - iv
        {
           printf("IV");
           numero -= 4;                                                            
        }
 
        else if (numero >= 1)     // 1 - i
        {
           printf("i");
           numero -= 1;                                                                                   
        }
}
}

int preguntarNumeroRango(char pregunta[],int a,int b){
	int numero;
	printf("%s\n",pregunta);
	scanf("%d",&numero);
	while(numero < a || numero > b){
	printf("%s\n",pregunta);
	scanf("%d",&numero);		
	}		
	return numero;
}
