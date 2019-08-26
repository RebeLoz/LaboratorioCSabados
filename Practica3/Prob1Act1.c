/* Practica numero 1*/
/*
*Autor: Rebecca Lozano Loredo
*Fecha: 25 de agosto de 2019
*grupo: 008
*Horario: Sabados de 9am a 11 am
*Matricula: 1869475
*/
#include <stdio.h>
float x,a,pr1,pr2,pr3,pr4;
int main()
{
	printf("\n Ingrese un numero del 0 al 10: ");
	scanf("%f",&x);
	/* Primero resolvemos valor de x de la primera fraccion*/
	pr1=x-1;
	/* Dividimos el valor que nos dio entre 4 */
	pr3=pr1/4;
	/* Resolvemos valor de x de la segunda fraccion*/
	pr2=x-5;
	/* Dividimos el valor que nos dio entre 36 */
	pr4=pr2/36;
	/*Restamos el resultado obtenido de la division de la priemra fraccion al resultado obtenido por la dividicson de la segunda fraccion y resolvemos la ecuacion*/ 
	a=pr3-pr4;
	
	printf("\n El resultado del problema es: %.2f",a);
	
	printf("\n\n\n\n\n");
	system ("pause");
	return 0;
}
