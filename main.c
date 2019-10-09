#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Autor: Rebecca Lozano Loredo
Fecha: 08/10/2019
Grupo: 008
Horario: Sabados 9am-11am
Matricula: 1869475
*/

int main(int argc, char *argv[]) {
/************************ACTIVIDAD1*******************/
int ventasEmpleadoOficinaEdificio[' '][' '][' '];
int i,j,k,op;
	do
	{
		do
		{
			/*Ingresamos el numero que queramos de empleado*/
		printf("Ingrese el numero de empleado[1-6]: ");
		scanf("%d", &i);
		}while(i>6 || i<0);
		
		do
		{
			/*Ingresamos el numero que queramos de oficina*/
		printf("Ingrese el numero de oficina[1-10]: ");
		scanf("%d", &j);
		}while(j>10 || j<0);
		fflush(stdin);
		do
		{
			/*Ingresamos el numero que queramos de edificio*/
		printf("Ingrese el numero de edificio[1-2]: ");
		scanf("%d", &k);
		}while(k>2 || k<0);
		fflush(stdin);
		do
		{
			/*Ingresamos la venta dependiendo de los datos que hemos introducido anteriormente*/
			printf("Ingrese la venta de el empleado %d de la oficina %d en el edificio %d: ", i, j, k);
			scanf("%d", &ventasEmpleadoOficinaEdificio[i][j][k]);
			fflush(stdin);
		}while(ventasEmpleadoOficinaEdificio[i][j][k]<0);
		
		
		do
		{
			/*Damos la opcion de seguir o de parar el programa*/
			printf("Ingrese [1- cont/ 2- Parar]");
			scanf("%d", &op);
		}while(op!=1 && op!=2 );
	}while(op==1);
	
	ventasEmpleadoOficinaEdificio[3][7][2]=4234;
	
	for(k=1;k<=2;k++)
	{
		for(j=1;j<=10;j++)
		{
			for(i=1;i<=6;i++)
			{
				/*Imprimimos todos los resultados*/
				printf("\n El empleado %d de la oficina %d del edicio %d ha vendido %d unidades",i,j,k,ventasEmpleadoOficinaEdificio[i][j][k]);
				
			}
		}
	}

	printf("\n\n\n\n\n");
	system("pause");
	/************************ACTIVIDAD2*******************/
		do
	{
		do
		{
		printf("Ingrese el numero de empleado[1-6]: ");
		scanf("%d", &i);
		}while(i>6 || i<0);
		
		do
		{
		printf("Ingrese el numero de oficina[1-10]: ");
		scanf("%d", &j);
		}while(j>10 || j<0);
		fflush(stdin);
		do
		{
		printf("Ingrese el numero de edificio[1-2]: ");
		scanf("%d", &k);
		}while(k>2 || k<0);
		fflush(stdin);
		do
		{
			/*Ingresamos la venta dependiendo de los datos que hemos introducido anteriormente*/
			
			
			printf("Ingrese la venta de el empleado %d de la oficina %d en el edificio %d: ", i, j, k);
			scanf("%d", &ventasEmpleadoOficinaEdificio[i][j][k]);
		ventasEmpleadoOficinaEdificio[i][j][k]=ventasEmpleadoOficinaEdificio[i][j][k]+10;
			fflush(stdin);
		}while(ventasEmpleadoOficinaEdificio[i][j][k]<0);
		
		
		do
		{
			/*Damos la opcion de seguir o de parar el programa*/
			printf("Ingrese [1- cont/ 2- Parar]");
			scanf("%d", &op);
		}while(op!=1 && op!=2 );
	}while(op==1);
	
	ventasEmpleadoOficinaEdificio[3][7][2]=4234+10;
	
	for(k=1;k<=2;k++)
	{
		for(j=1;j<=10;j++)
		{
			for(i=1;i<=6;i++)
			{
				/*Imprimimos todos los resultados*/
				printf("\n El empleado %d de la oficina %d del edicio %d ha vendido %d unidades",i,j,k,ventasEmpleadoOficinaEdificio[i][j][k]);
				
			}
		}
	}
	
	/*¿Cuantos elementos componen el array multidimensional? 120 elementos*/
	/*¿Qué ocurre si intentamos mostrar por pantalla un valor con un índice que no está definido para ese array multidimensional? Devuelve un numero grande*/
	return 0;
}

