#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Autor: Rebecca Lozano Loredo
Fecha: 08/10/2019
Grupo: 008
Horario: Sabados 9am-11am
Matricula: 1869475
*/
int main(int argc, char *argv[]) 
{
	/********************************ACTIVIDAD2*************************************/
	#define SIZE 4
struct coordinates
{
	int latitude;
	int longitude;
} places[4];
int op,op2,i,j,aux;
do{
	/*Preguntamos la opcion que desea con un menu*/
	printf("\n M E N U ");
	printf("\n 1-INGRESAR DATOS");
	printf("\n 2-ORDENAMIENTO POR LATITUD");
	printf("\n 3-ORDENAMIENTO POR LONGITUD");
	printf("\n 4-SALIR");
	printf("\n QUE OPCION DESEA[1-4]: ");
	scanf("%d",&op);
	switch(op)
	{	
		case 1:
			/*OPCION UNO DEL MENU*/
					for(i=0;i<4;i++){
					printf("\n Ingrese la latitud: ");
					scanf("%d",&places[i].latitude);
					printf("\n Ingrese la longitud: ");
					scanf("%d",&places[i].longitude);
				}
				break;
		case 2:
			/*opcion dos del menu*/
						for(i=1;i<4;i++){
							for(j=0; j<4-i;j++);{
								if(places[j].latitude<places[j+1].latitude){
								aux=places[j+1].latitude;
								places[j+1].latitude=places[j].latitude;
								places[j].latitude=aux;
								}
							}
						}
						for(i=0;i<4;i++){
							printf("\n %d",places[i].latitude);
						}
				break;
		case 3:	
		/*OPCION TRES DEL MENU*/
				for(i=1;i<4;i++){
					for(j=0; j<4-i;j++);{
					if(places[j].longitude<places[j+1].longitude){
								aux=places[j+1].longitude;
								places[j+1].longitude=places[j].longitude;
								places[j].longitude=aux;
								}
							}
						}
						for(i=0;i<4;i++){
							printf("\n %d",places[i].longitude);
						}
				break;
		case 4:	
		/*opcion cuatro dle menu, querer salir*/
				printf("\n S A L I E N D O");
}
}while(op!=4);
	
	
	return 0;
}
