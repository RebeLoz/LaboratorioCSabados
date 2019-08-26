/* Practica numero 1*/
/*
*Autor: Rebecca Lozano Loredo
*Fecha: 25 de agosto de 2019
*grupo: 008
*Horario: Sabados de 9am a 11 am
*Matricula: 1869475
*/
#include <stdio.h>
float x,a,pr1,pr2,pr3,pr4,pr5,pr6;
int main()
{
	printf("\n Ingrese un numero del 0 al 10: ");
	scanf("%f",&x);
	/* Primero resolvemos valor de x de la primera fraccion*/
	pr1=x+1;
	/* Dividimos el valor que nos dio entre 8 */
	pr2=pr1/8;
	/* Resolvemos valor de x de la segunda fraccion*/
	pr3=2*x;
	/*Restamos -3 a el resultado anterior*/
	pr4=pr3-3;
	/*Dividimos el resultado de la resta entre 16*/
	pr5=pr4/16;
	/*Restamos el resultado de la primera fraccion a el resultado de la segunda fraccion*/
	pr6=pr2-pr5;
	/* Multiplicamos por 6 el resultado anterior y con eso resolvemos la ecuacion*/
	a=pr6*6;
	
	
	printf("\n El resultado del problema es: %.2f",a);
	
	printf("\n\n\n\n\n");
	system ("pause");
	return 0;
}
