#include <stdio.h> 

#include <stdlib.h> 

/* 

Autor: Rebecca Lozano Loredo 

*Fecha: 31 de agosto de 2019 

*grupo: 008 

*Horario: Sabados 9am-11am 

*Matricula: 1869475 

*/ 

//*** ACT1 

/*Imprimir el numero mas grande introducido*/ 

/* run this program using the console pauser  or add your own getch, system("pause") or input loop */ 

  

int main(int argc, char *argv[]) { 

float n1,n2,a,b,c,d=a*b,e=c/b,f=a+b+c,g=a+b,h=a-b; 

printf("Introduzca un numero: "); 

/*Introducimos un numero y lo identificamos como n1*/ 

scanf("%f",&n1); 

printf("Introduzca otro numero: "); 

/*Introducimos un segundo numero y los identificamos como n2*/ 

scanf("%f",&n2); 

if (n1>n2){ 

/*Comparamos el n1 con el n2 para saber cual es mayor*/ 

printf("\n El numero mas grande es: %.2f \n",n1); 

} 

else  

   if(n1<n2){ 

/*Comparamos si el n2 es mayor a n1*/ 

printf("\n El numero mas grande es: %.2f \n",n2); 

} 

    else{ 

/*Comparamos si n1 y n2 son numeros iguales*/ 

printf("Los numeros ingresados son iguales \n"); 

} 

 

//*** ACT2 

/*Imprimir resultados de ciertas operaciones*/ 

printf("Ingrese el valor de a: "); 

scanf("%f",&a); 

printf("Ingrese el valor de b: "); 

scanf("%f",&b); 

printf("Ingrese el valor de c: "); 

scanf("%f",&c); 

if(a>3){ 

/*Comparamos valores*/ 

printf("\n Es verdadero"); 

} 

else{ 

printf("\n Es falso"); 

}	 

if(a>c){ 

/*Comparamos valores*/ 

printf("\n Es verdadero"); 

} 

else{ 

printf("\n Es falso"); 

} 

if(b != c){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

} 

else{ 

printf("\n Es falso"); 

} 

if(a == 3){ 

/*Comparamos valores*/ 

printf("\n Es verdadero"); 

} 

else{ 

printf("\n Es falso"); 

} 

if(d == 15){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

} 

else{ 

printf("\n Es Falso"); 

} 

if(e < a){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

}	 

else{ 

printf("\n Es falso"); 

} 

if(e == -10){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

} 

else{ 

printf("\n Es falso"); 

} 

if(f == 5){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

} 

else{ 

printf("\n Es Falso"); 

} 

if(g == 8 && h == 2){ 

/*Comparamos valores*/	 

printf("\n Es Verdadero"); 

} 

else{ 

printf("\n Es falso"); 

} 

if(g == 8 || h == 6){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

} 

else{ 

printf("\n Es falso"); 

} 

if(a > 3 && b > 3 && c < 3){ 

/*Comparamos valores*/ 

printf("\n Es correcto"); 

} 

else{ 

printf(" \n Es falso"); 

}  

  

//*ACTEXTRA 

/*Ingresamos valores de las variables que se utilizaran*/ 

printf("Ingrese el valor de a: "); 

scanf("%f",&a); 

printf("Ingrese el valor de b: "); 

scanf("%f",&b); 

printf("Ingrese el valor de c: "); 

scanf("%f",&c); 

if (a>3){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (a>c){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (b!=c){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (a==3){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (d==15){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (e<a){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (e==-10){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (f==5){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

    } 

    else{ 

    	printf("\n Es falso \n"); 

} 

if(g==8 && h==2){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (g==8 || h==6){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

if (a>3 && b>3 && c<3){ 

/*Comparamos valores*/ 

printf("\n Es verdadero \n"); 

} 

else{ 

printf("\n Es falso \n"); 

} 

 

system ("pause"); 

return 0; 

} 
