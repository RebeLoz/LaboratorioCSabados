#include <stdio.h>
#include <stdlib.h>
/*
Autor: Rebecca Lozano Loredo
*Fecha: 31 de agosto de 2019
*grupo: 008
*Horario: Sabados 9am-11am
*Matricula: 1869475
*/
//*** ACT3
/*Imprimir el numero mas grande introducido*/
/* run this program using the console pauser  or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n1,n2,a,b,c,d,e,f,g,h;
	printf("Introduzca un numero: ");
	/*Introducimos un numero y lo identificamos como n1*/
	scanf("%d",&n1);
	printf("Introduzca otro numero: ");
	/*Introducimos un segundo numero y los identificamos como n2*/
	scanf("%d",&n2);
	if (n1>n2){
		/*Comparamos el n1 con el n2 para saber cual es mayor*/
		printf("\n El numero mas grande es: %d \n",n1);
	}
	else 
	   if(n1<n2){
		/*Comparamos si el n2 es mayor a n1*/
		printf("\n El numero mas grande es: %d \n",n2);
	}
    else{
		/*Comparamos si n1 y n2 son numeros iguales*/
		printf("Los numeros ingresados son iguales \n");
	}
	
	if(a>3){
		printf("\n Es verdadero");
	}
	else{
		printf("\n Es falso");
	}	
	if(a>c){
		printf("\n Es verdadero");
	}
	else{
		printf("\n Es falso");
	}
	if(b != c){
		printf("\n Es correcto");
	}
	else{
		printf("\n Es falso");
	}

//*ACT2
	if(a == 3){
		printf("\n Es verdadero");
	}
	else{
		printf("\n Es falso");
	}
	if(d == 15){
		printf("\n Es correcto");
	}
else{
printf("\n Es Falso");
}
if(e < a){
printf("\n Es correcto");
}
else{
printf("\n Es falso");
}
if(e == -10){
printf("\n Es correcto");
}
else{
printf("\n Es falso");
}
if(f == 5){
printf("\n Es correcto");
}
else{
printf("\n Es Falso");
}
if(g == 8 && h == 2){
printf("\n Es Verdadero");
}
else{
printf("\n Es falso");
}
if(g == 8 || h == 6){
printf("\n Es correcto");
}
else{
printf("\n Es falso");
}
if(a > 3 && b > 3 && c < 3){
printf("\n Es correcto");
}
else{
printf(" \n Es falso");
} 

//*ACTEXTRA
	/*Ingresamos valores de las variables que se utilizaran*/
	printf("Ingrese el valor de a: ");
	scanf("%d",&a);
	printf("Ingrese el valor de b: ");
	scanf("%d",&b);
	printf("Ingrese el valor de c: ");
	scanf("%d",&c);
	if (a>3){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (a>c){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (b!=c){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (a==3){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (d==15){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (e<a){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (e==-10){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (f==5){
		printf("\n Es verdadero \n");
    }
    else{
    	printf("\n Es falso \n");
	}
	if(g==8 && h==2){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (g==8 || h==6){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	if (a>3 && b>3 && c<3){
		printf("\n Es verdadero \n");
	}
	else{
		printf("\n Es falso \n");
	}
	
	system ("pause");
	return 0;
}
