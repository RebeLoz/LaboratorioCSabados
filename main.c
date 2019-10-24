#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/*
*Autor: Rebecca Lozano Loredo
*Fecha: 10/Octubre/2019
*Grupo: 008
*Horaro: Sabado 9am-11am
*Matricula: 1869475
*/
int main(int argc, char *argv[]) {
/**************************ACTIVIDAD 1*******************/
struct estudiante
 {
   char nom[' '];
   float cal[5];
   float prom;
 };
struct estudiante al[' '];
struct estudiante temp;
int i=0,j,k,op1,op2;
//char aux[' '];
  //setlocale(LC_ALL, "spanish");
  printf("\n\n\n\t\t\t ENTRADA DE DATOS\n\n");
  do //control de capturas para n alumnos
   {
   //system("cls");
     
     do // para verificar si los datos de entrada estan correctos con i=0
       {
   		  printf("\n Proporciona tu Nombre: "),
     	  fflush(stdin);
     	  gets(al[i].nom);
    
     	  for(j=0;j<5;j++)
     	    {
     	      do
    		    {
     			  printf("\n Calificación_%d: ",j+1);
     			  scanf("%f",&al[i].cal[j]);
     			  //gets(aux); al[i].c1=atof(aux);
    		    } while(al[i].cal[j]<0 || al[i].cal[j]>100);
     	    }
		 do
    		{
     			printf("\n\n Es Correcta la Información [1-si/2-no]:  ");
	  			scanf("%d",&op1);
	 		} while(op1 != 1 && op1 != 2);	 
	   }while(op1 == 2);
   
     do
       {
     	 printf("\n\n Desea continuar [1-si/2-no]:  ");
	  	 scanf("%d",&op2);
	   } while(op2 != 1 && op2 != 2);
	 i++; // incremento del contador de las n capturas
   }while(op2 == 1);

  //rutina para el Calculo del promedio

  for(j=0;j<i;j++)
	   al[j].prom = (al[j].cal[0] + al[j].cal[1] + al[j].cal[2] + al[j].cal[3] + al[j].cal[4])/5;
	   
 	printf("\n\n\t REPORTE ORDENADO POR PROMEDIO");
							for(j=0;j<i;j++) 
							   {
								for(k=j+1;k<i;k++) 
								   {
									 if(al[j].prom < al[k].prom) 
									  {
										temp = al[j];
										al[j] = al[k];
										al[k] = temp;
									  }
								   }
							   }
							for(j=0;j<i;j++)
                                printf("\n\n NOMBRE: %s\n PROMEDIO: %.2f\n",al[j].nom,al[j].prom);
                                
	/******************************ACTIVIDAD2**************************/
typedef struct Panda{

	char *nombrep;
	float peso;
	int anyonac;
	char sexo;
}mip;

void LeerPanda(mip *p);
int EdadPanda(mip p); //devuelve la edad
int TenerBebes(mip p); //devuelve 1 si puede tener bebes y 0 si no.

void main() {
	mip mp; 
	int puede;

	LeerPanda(&mp); 
	puede=TenerBebes(mp);
	if(puede==1)
	printf("El panda %s puede tener bebes\n",mp.nombrep);
	else
	printf("El panda %s no puede tener bebes\n",mp.nombrep);	
}

void LeerPanda(mip *p){
	char nom[35];

	printf("El panda se llama: ");
	gets(nom);
	p->nombrep=(char *)malloc(sizeof(char) * strlen(nom)+1); 
	if(p==NULL)
	{
		printf("Insuficiente espacio de memoria\n");
		exit(1); 
	}
	strcpy(p->nombrep,nom); 
	fflush(stdin);
	printf("Su peso es:"); 
	scanf("%f",&p->peso); 
	fflush(stdin);
	printf("Su anyo de nacimiento es:"); 
	scanf("%d",&p->anyonac); 
	fflush(stdin);
	printf("Su sexo es:"); 
	scanf("%c",&p->sexo);
	}

int EdadPanda(mip p)//devuelve la edad
{
	int edadp;
	edadp=2019-p.anyonac;
	return(edadp); 
	}
	
	int TenerBebes(mip p) 
	{//devuelve 1 si puede tener bebes y 0 si no. {
	int res,edad;
	edad=EdadPanda(p);
	if(edad>=5 && (p.sexo=='f' || p.sexo=='F'))
		res=1; 
	else
		res=0; 
	return(res);
}
}
