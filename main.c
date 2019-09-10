#include <stdio.h>
#include <stdlib.h>
/*
Autor: Rebecca Lozano Loredo
*Fecha: 09 de Septimebre de 2019
*Grupo: 008
*Horario: Sabados 9am-11am
*Matricula: 186947
*/
//********************************ACTIVIDAD1********************************
/*Imprimir la nota de una materia*/
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float nota;
	char mat[30];
	int dia, op;
	printf("Introduzca el nombre de la materia: ");
	fflush(stdin);
	gets(mat);
	printf("Introduzca la calificacion de la materia: ");
	scanf("%f",&nota);
	if(nota>=5 && nota<=10){
		/*Comparamos el valor que le dimos a la opcion "notas" con nuestra condicion*/
		printf("APTO");
	}
	else{
		if(nota>=0 && nota<5){
			/*Comparamos el valor que le dimos a la opcion "notas" con nuestra condicion*/
			printf("NO APTO");
		}
		else{
			if(nota<0 || nota>10){
				/*Comparamos el valor que le dimos a la opcion "notas" con nuestra condicion*/
				printf("ERROR:Nota incorrecta");
			}
		}
	}
	
//********************************ACTIVIDAD2*******************************
/*Imprimir en forma cadena un dia de la semana*/
	printf("\n\n\n\n\n");
	printf("Ingrese numero de dia de la semana: ");
	scanf("%d",&dia);
	switch(dia)
	{
		/*Dado el valor que le dimos a "dia" se abriran una serie de casos para asignar que dia es el que se indica*/
		case 1: printf("Lunes");
				break;
		case 2: printf("Martes");
				break;
		case 3: printf("Miercoles");
				break;
		case 4: printf("Jueves");
				break;
		case 5: printf("Viernes");
				break;
		case 6: printf("Sabado");
				break;
		case 7: printf("Domingo");
				break;
		default: printf("ERROR:Dia incorrecto");
		/*En caso de no ser correcto se mandara a esta opcion erronea*/
	}
	getch(); /*Pausa*/
	
//********************************ACTIVIDADEXTRA****************************
/*Imprimir que opcion se escogio*/
	printf("\n\n\n\n\n");
	printf("Ingrese un numero [1-5]: ");
	scanf("%d",&op);
	switch(op)
	{
		/*Dado el valor que le dimos a "op" abriremos una serie de casos para compararlos y dar por resultado la opcion quee escogimos*/
		case 1: printf("Usted escogio la opcion: 1");
				break;
		case 2: printf("Usted escogio la opcion: 2");
				break;
		case 3: printf("Usted escogio la opcion: 3");
				break;
		case 4: printf("Usted escogio la opcion: 4");
				break;
		case 5: printf("Usted escogio la opcion: 5");
				break;
		default: printf("Opcion Equivocada");
	}
	getch();
	return 0;
}
