#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
char cad1[' '],cad2[' '],b=' ',let,cadena[200];
int i, j=0,x,a=0,u=0,longi,longi2,rep,caracteres_dif,caracter[256];
/*Introducimos la cadena que queramos invertir*/
printf("\n Introduzca una cadena: ");
fflush(stdin); 
gets(cad1);
/*Hacemos que se invierta la cadena*/
longi=strlen(cad1);
/*Ponemos un for para que cheque letra por letra*/
for (i=0;i<=longi;i++)
    {
      if (cad1[i]==b)
      {
      i++;
      }
      cad2[j]=cad1[i];
      j++;
     }
     
/*Invertimos la segunda cadena*/
    x=0;
    longi2=strlen(cad2); 
/*Ponemos un for para checar letra por letra*/
    for (x=longi2-1;x>=0;x--)
    {
     if (cad2[x]==cad2[a])
     {
         u++;
     }
    a++;
    }
/*Se checan si quedaron iguales e imprime si es palindromo o no*/
    if (u==longi2)
    { 
	printf("\n\n LA CADENA ES PALINDROMO");
	}
    else
    {
    printf("\n\n LA CADENA NO ES PALINDROMO");
	}
  
printf("\n\n\n\n\n\n");
system("pause"); 
system("cls");


/**************************ACTIVIDAD 2*******************/
	caracteres_dif=0;
	/*Introducimos la cadena que le vamos a contar los caracteres*/
	printf ("Introduzca la cadena: ");
	fflush(stdout);
	gets(cadena);
	/*Iniciamos for para que empiece a contar letra por letra*/
	for (i=0 ; i<200 ; i++)
	{
		if (cadena[i]<0)
			cadena[i]=(i*-1);
	}
	for (i=0 ; i<256 ; i++)
		caracter[i]=0;
	for (i=0 ; cadena[i] != '\0' ; i++)
		caracter[cadena[i]]++;
   	for (i=0 ; i<256 ; i++)
		if (caracter[i] > 0)
			caracteres_dif++;
			/*Imprimimos los resultados*/
   	printf ("Hay %i caracteres diferentes.\n", caracteres_dif);
	printf ("Son:\n\n");
	for (i = 0 ; i < 256; i++)
		if (caracter[i] > 0)
			printf ("Caracter %c = %i\n", i, caracter[i]);
	printf ("\n\n\n\n\n");
	system ("Pause");
	return 0;
}
