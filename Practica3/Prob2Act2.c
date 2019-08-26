/* Practica numero 1*/
/*
*Autor: Rebecca Lozano Loredo
*Fecha: 25 de agosto de 2019
*grupo: 008
*Horario: Sabados de 9am a 11 am
*Matricula: 1869475
*/
#include <stdio.h>
float x,pr1,pr2,pr3,pr4,pr5,pr6,a;
int main()
{
	printf("\n Ingrese un numero del 0 al 10: ");
	scanf("%f",&x);	
	/* Primero resolvemos valor de x de los parentesis*/
	pr1=x+1;
	/* Resolvemos valor de x de la fraccion*/
	pr2=x-3;
	/*El resultado de nuestra fraccion lo dividimos entre 2*/
	pr4=pr2/2;
	/*Al resultado de la operacion entre parentesis lo multiplicamos por -2*/
	pr5=-2*pr1;
	/*Restamos el resultado obtenido de la multiplicacion con -2 al resultado obtenido por la dividision entre 2*/ 
	pr6=pr5-pr4;
	/*Le restamos 2 a nuestra operacion de resta de dos resultados para obtener el resultado final de la operacion*/
	a=2-pr6;
	
	printf("\n El resultado del problema es: %.2f",a);
	
	printf("\n\n\n\n\n");
	system ("pause");
	return 0;
}
