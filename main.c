#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,c,*x,*y,*z,*f,vocal=0;
	char cad[30],*g;
	/********************************ACTIVIDAD1*******************************/
	/*Ingresamos la cadena*/
	printf("\n Ingrese la cadena: ");
	fflush(stdin);
	gets(cad);
	/*Le damos nuestra cadena al apuntador*/
	g=cad;
	/*Contamos las vocales*/
	while(*g!='\0'){
		if(*g=='a' || *g=='e' || *g=='i' || *g=='o' || *g=='u' || *g=='A' || *g=='E' || *g=='I' || *g=='O' || *g=='U'){
			vocal++;
		}
		g++;
	}
	/*Imprimimos*/
	printf("\n La direccion de la cadena es %p",g);
	printf("\n Hay %d vocales",vocal);
	printf("\n\n\n\n\n");
	
		
	/***********************ACTIVIDAD2************************/
	/*Ingresamos los valores*/
	printf("\n Ingrese el valor de a: ");
	scanf("%d",&a);
	printf("\n Ingrese el valor de b: ");
	scanf("%d",&b);
	/*Hacemos la suma de los dos valores que acabamos de ingresar*/
	c=a+b;
	/*Asignamos cada valor a los apuntadores*/
	x=&a;
	y=&b;
	z=&c;
	/*Imprimimos la suma de nuestros valores y las direcciones de cada uno de ellos*/
	printf("\n La suma es %d",*z);
	printf("\n La direccion de a es %p",x);
	printf("\n La direccion de b es %p",y);
	printf("\n La direccion de c es %p",z);
	getch();
	printf("\n\n\n\n\n");
	system("pause");
	return 0;
}
