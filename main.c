#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Autor: Rebecca Lozano Loredo
Fecha: 22/09/2019
Grupo: 08
Horario: Sabado de 9am a 11am
Matricula: 1869475
*/
int main(int argc, char *argv[]) {
	/*************************ACTIVIDAD1*********************/
void nprim(int n, int c, int i);
{
    int n, c, i=0; 
    do{
        printf("Introduzca un numero:\n");		/*Ingresamos un numero para checar si es primo o no*/
        scanf("%d",&n);
    }while(!(n>=0)); 
    
    i = 0; 
    for(c=2; c<=n/2; c++) {
   		if (n%c == 0) i++; {		/*Empezamos a dividir el numero ingresado entre 2 para ver si es primo o no*/
    		if (i >= 1){	/*Si el resultado de la division nos da mayor a 1 quiere decir que no es primo */
				printf ("%d no es primo\n", n); 
			}
    			else {	/*Si el resultado nos da 1 quiere decir que es primo*/
					printf ("%d es primo\n",n);
					}
		}
	}
    system("pause");
    return(0);
}
/***********************ACTIVIDAD2*****************/
long int potencia (int base, int exponente);
{
    int base,exponente;
    printf("Ingrese la base: ");	/*Ingresamos un numero como base*/
    scanf("%d",&base);
    while (base<0)
	{
	printf("ERROR, el dato debe ser mayor que cero:\n");
    scanf("%d",&base);
	}
     printf("Ingrese el exponente: ");	/*Ingresamos un numero como exponente*/
     scanf("%d", &exponente);
    printf("%d ^ %d es %ld \n\n", base, exponente, potencia(base,exponente));
    getch();
    return 0;
	}

	long int potencia (int base, int exponente)
		{
    	long int sum=0, i,x;
    	for(i=1; i<exponente; i++)
			{
		    x=base*base;	/*Hacemos la operacion de multiplicar nuestra base por la base*/
			sum=sum+x;
		}
		return (sum);
	}
}
