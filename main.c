#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
*Autor: Rebecca Lozano Loredo
*Fecha: 28/09/2019
*Grupo: 08
*Horario: Sabado 9am-11am
*Matricula: 1869475
*/

int main(int argc, char *argv[]) {
	
	
	/***********************ACTVIDAD1*********************/
	int r,nc,a,i,A[24],VA,VB;
	
	for(i=0;i<=24;i++)

	{
		if(i!=2 && i!=20){
			/*Ponemos excepciones para que se pueda imprimir resultado acorde a las indicaciones*/
			do{
				fflush(stdin);
				printf("\n Ingrese el numero de autos en la hora %d: ",i);
				/*Ingresamos el numero de autos en la hora que se indica*/
				scanf("%d",&a);
				A[i]=a;
				/*Lo guardamos dependiendo de la posicion de i*/
			}while(a<0);
		}
	}
	
	r=2;
	A[r]=57;
	fflush(stdin);
	r=21;
	A[r]=57;
	fflush(stdin);
	
	for(i=0;i<24;i++){
		/*Ahora el indicador va a topar hasta el numero 24 para sacar resultados*/
		printf("\n A[%d]=%d",i+1,A[i]);
	}
	
	printf("\n A la hora %d hay %d autos",r,A[r]);
	/*Imprimimos el resultado*/
	printf("\n\n\n\n\n");
	system("pause");
	
	/**********************ACTIVIDAD2*******************/
	VA=8;
	VB=4;
	r=VA/VB;
	for(i=0;i<=24;i++)
	{
		if(i!=r){
			do{
				fflush(stdin);
				printf("\n Ingrese el numero de autos en la hora %d: ",i);
				scanf("%d",&a);
				A[i]=a;
			}while(a<0);
		}
	}
	
	fflush(stdin);
	A[r=57];
	for(i=0;i<24;i++){
			printf("\n A[%d]=%d",i+1,A[i]);
	}
	printf("\n\n\n\n\n");
	system("pause");
	return 0;
}
