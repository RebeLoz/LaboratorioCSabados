#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*Autor: Rebecca Lozano Loredo
*Fecha: 14 de septiembre de 1019
*Grupo: 008
Horario: Sabados de 9am a 11am
Matricula: 1869475
*/
int main(int argc, char *argv[]) {
	
	/**********ACTIVIDAD 1*********/
	int num,sum=0,sumat=0;
	char op;
	do{
	printf("\n Introduzca un numero: ");
	/*Introducimos un numero en el programa*/
	scanf("%d",&num);
	sum=sum+num;
	/*Hacemos suma de los numeros ingresados*/
	fflush(stdin);
		do{
		printf("\n Desea introducir otro numero[s/n:] ");
		/*Damos la opcion de elegir si se quiere ingresar otro numero o no*/
		scanf("%c",&op);
		}while(op != 's' && op != 'n');
		/*Si se ingresa otra letra que no sea s o n se volvera a repetir la pregunta*/
	}while (op == 's');
	/*Al ingresar la letra s seguira el ciclo y al momento de ingresar la letra n se imprimira el resultado de la suma ya antes echa*/
	printf(" La suma es: %d",sum);
	printf("\n\n\n\n\n");
	system("pause");
	
			
			
	/***********ACTIVIDAD2**********/
	do{
		printf("\n Introduzca un numero: ");
		/*Introduciremos un numero cual sea*/
		scanf("%d",&num);
		fflush(stdin);
	}while(num<101);
	/*Cuando el numero sea mayor a 100 se cerrara el ciclo y dejara de introducir numeros*/
	
	system("pause");
	return 0;
}
