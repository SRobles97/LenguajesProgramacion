#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main(){
	menu();
}

void menu(){
	printf("(1) Ejercicio Uno\n(2) Ejercicio Dos\n(3) Ejercicio Tres\n(4) Ejercicio Cuatro\n(5) Ejercicio Cinco\n(6) Ejercicio Seis\n(7) Ejercicio Siete\n(8) Ejercicio Ocho\n(9) Ejercicio Nueve\n(10) Ejercicio Diez\n(11) Ejercicio Once\n(12) Ejercicio Doce\n(13) Ejercicio Trece\n");
	int opcion = preguntarNumeroRango("Ingrese su opción.\n",1,13);
	switch(opcion){
		case 1: ejercicioUno();
		break;
		case 2: ejercicioDos();
		break;
		case 3: ejercicioTres();
		break;
		case 4: ejercicioCuatro(); 
		break;
		case 5: ejercicioCinco();
	    break;
		case 6: ejercicioSeis();
		break;
		case 7: ejercicioSiete(); 
		break;
		case 8: ejercicioOcho();
		break;
		case 9: ejercicioNueve();
		break;
		case 10: ejercicioDiez();
		break;
		case 11: ejercicioOnce();
		break;
		case 12: ejercicioDoce();
		break;
     	case 13: ejercicioTrece();
		break;	
	}
}

void ejercicioUno(){
	int precio = preguntarNumero("Ingrese el precio del producto");
	int descuento = preguntarNumero("Ingrese el % de descuento");
	int precioFinal = precio - porcentaje(precio,descuento);
	printf("El precio con el %d porciento de descuento es de %d",descuento,precioFinal);
	
}

void ejercicioDos(){
	int ladoA = preguntarNumero("Ingrese el lado A");
	int ladoB = preguntarNumero("Ingrese el lado B");
	int perimetro = (suma(ladoA,ladoB)*2);
	int area = multiplicacion(ladoA,ladoB);
	perimetro = (ladoA+ladoB)*2;
	area = (ladoA*ladoB);
	printf("El perimetro es %d\n",perimetro);	
	printf("El area es %d",area);		
}

void ejercicioTres(){
	float tasaCambio = 0.92;
	int dolar = preguntarNumero("Ingrese la cantidad de dolares que quiere cambiar a euros");
	float resultado = tasaCambio*dolar;
	printf("El cambio resulto de %d dolares a %f euros.",dolar,resultado);
}

void ejercicioCuatro(){
	float r = preguntarDecimal("Ingresa el radio de una circunferencia");
	float pi = 3.1416;
	float perimetro = 2*pi*r;
	float area = pi*(r*r);
	float volumen = (4*pi*(r*r*r))/3;
	printf("Perimetro Circunferencia: %f\nArea circunferencia: %f\nVolumen circunferencia: %f",perimetro,area,volumen);
	
}

void ejercicioCinco(){
	int dias = preguntarNumero("Ingrese una cantidad de dias");
	int horas = preguntarNumero("Ingrese una cantidad de horas");
	int minutos = preguntarNumero("Ingrese una cantidad de minutos");
	minutos = minutos*60;
	horas = horas*3600;
	dias = dias*86400;
	printf("Dias a segundos: %d\nHoras a segundos: %d\nMinutos a segundos: \%d\n",dias,horas,minutos);
}

void ejercicioSeis(){
	int segundos = preguntarNumero("Ingrese la cantidad de segundos");
	float minutos = segundos/60;
	float horas = segundos/3600;
	float dias = segundos/86400;
	printf("%d segundos a minutos: %f\n%d segundos a horas: %f\n%d segundos a dias: %f",segundos,minutos,segundos,horas,segundos,dias);
	
}

void ejercicioSiete(){
	int a = preguntarNumero("Ingrese el valor del coeficiente a");
	int b = preguntarNumero("Ingrese el valor del coeficiente b");
	int c= preguntarNumero("Ingrese el valor del coeficiente c");
	printf("La ecuacion es (%d)x^2+(%d)x+(%d)\n\n",a,b,c);
	int discriminante = (b^2)-4*a*c;
	if(discriminante < 0){
		discriminante = discriminante*-1;
	}
	float x1 = (a+sqrt(discriminante))/(2*a);
	float x2 = ((a-sqrt(discriminante))/2*a);
	printf("x1 = %f\nx2 = %f",x1,x2);
}

void ejercicioOcho(){
	float r1 = preguntarDecimal("Ingrese R1");
	float r2 = preguntarDecimal("Ingrese R2");	
	float req = (r1*r2)/(r1+r2);
	printf("La resistencia equivalente es igual a %f",req);
	
	
}

void ejercicioNueve(){
	int numeros[4] = {preguntarNumero("Ingrese un numero"),preguntarNumero("Ingrese otro numero"),preguntarNumero("Ingrese otro numero"),preguntarNumero("Ingrese el ultimo numero")};
	int suma = 0;
	int i = 0;
	for(i=0;i<4;i++){
		suma = suma+numeros[i];
	}
	float media = suma/4;
	printf("La media es de %f",media);
}

void ejercicioDiez(){
	int x = 2, y = 6, z = 4;
	y = y+4*z;
	y += x;
	printf("%d",y);
}

void ejercicioOnce(){
	int x = 2, y = 6;
	if((x<y && x!=y) || !(x==y)){
		printf("verdadero");
	}else{
		printf("falso");
	}
}

void ejercicioDoce(){
		
}

void ejercicioTrece(){
	
}

int porcentaje(int a,int b){
	return (a*b)/100;
}

int multiplicacion(int a, int b){
	return a*b;
}

int suma(int a,int b){
	return a+b;
}

int preguntarNumero(char pregunta[]){
	int numero;
	printf("%s\n",pregunta);
	scanf("%d",&numero);
	return numero;
}

int preguntarNumeroRango(char pregunta[],int a,int b){
	int numero;
	printf("%s\n",pregunta);
	scanf("%d",&numero);
	if(numero < a || numero > b){
	while(numero < a || numero > b){
	printf("%s\n",pregunta);
	scanf("%d",&numero);		
	}		
	}


	return numero;
}

int preguntarDecimal(char pregunta[]){
	float numero;
	printf("%s\n",pregunta);
	scanf("%f",&numero);
	return numero;
}
