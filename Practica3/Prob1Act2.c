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
	/* Primero resolvemos valor de x de la fraccion*/
	pr1=x-2;
	/* Dividimos el valor que nos dio entre 3 */
	pr2=pr1/3;
	/*Resolvemos la operacion de los parentesis*/
	pr3=1-pr2;
	/*Resolvemos la operacion del corchete*/
	pr4=x-pr3;
	/*Siguiendo la regla de los signos, multiplicamos nuestro resultado del corchete por 2*/
	pr5=pr4*2;
	/*Dividimos el resultado obtenido entre 3*/
	pr6=pr5/3;
	/*Le sumamos 1 a nuestro resultado para obtener el resultado final de nuestra operacion*/
	a=pr6+1;
	
	printf("\n El resultado del problema 1 es: %.2f",a);
	
	printf("\n\n\n\n\n");
	system ("pause");
	return 0;
}
