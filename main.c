#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Autor: Rebecca Lozano Loredo
Fecha: 22/09/2019
Grupo: 08
Horario: Sabado de 9am a 11am
Matricula: 1869475
*/
int main(int argc, char *argv[]) {
	
	/************************ACTIVIDAD1*****************/
	int i,num,pot,mult,acum=1;
	float prom, cal,sumcal;
	
	for(i=1;i<=10; i++){
		printf("\n Ingrese la calificacion del alumno: ");
		/*Ingresamos la calificacion con el indicador al tope 10*/
		scanf("%f",&cal);
		/*Sumamos las calificaciones de todos los parciales*/
		sumcal= sumcal+cal;
	}
	prom=sumcal/10;
	
	printf("\n El promedio del alumno es: %.2f",prom);
	/*Sacamos el promedio de la suma de las calificaciones del alumno*/
	if (prom>70){
		/*Ponemos de codicion si el promedio es mayor a 7*/
		printf("\n APROBADO \n");
	}
	else{
		/*Y si el promedio no es mayor a 7 se pasa directo al else*/
		printf("\n REPROBADO \n");
	}
	printf("\n\n\n\n\n");
	system("pause");
	
	
	
	/***************ACTIVIDAD 2*************************/
	
	
	printf("\n Ingrese un numero: ");
	/*Escogemos el numero que nosotros querramos*/
	scanf("%d",&num);
	printf("\n Ingrese un numero como potencia: ");
	/*Escogemos el numero por el cual vamos a elevar*/
	scanf("%d",&pot);
	for(i=1;i<=pot;i++){
		/*Empezamos las operaciones*/
		acum=acum*num;
	}
	/*Al final imprimimos el resultado*/
	printf("\n El numero final es: %d",acum);
	
	return 0;
}
