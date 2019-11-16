#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
Autor: Rebecca Lozano Loredo
Fecha: 16/11/2019
Grupo: 008
Horario: Sabados 9am-11am
Matricula: 1869475
*/
int main(int argc, char *argv[]) {
	/*******************ACTIVIDAD1***********************/
	FILE *archivo;
	FILE *archivo2;
	char cad[30],i,j,longitud,temporal,procesado;
	archivo=fopen("archivo.txt","w");
	archivo2=fopen("archivo_alreves.txt", "w");
	archivo=fopen("archivo.txt","w+");
	if(archivo!=NULL){
		printf("\n Ingrese una cadena: ");
		fflush(stdin);
		gets(cad);
		longitud=strlen(cad);
		printf("\n La palabra es %s",cad);
		fprintf(archivo,"%s",cad);
	fclose(archivo);
	}
	if(archivo2!=NULL){
		for(i=0,j=longitud-1;i<longitud/2;i++,j--){
			temporal=cad[i];
			cad[i]=cad[j];
			cad[j]=temporal;
		}
	printf("\n La palabra al reves es %s", cad);
	fprintf(archivo2,"%s",cad);
	fclose(archivo2);
	}
	printf("\n\n\n\n\n");
	/******************ACTIVIDAD2************************/
	FILE *fp;
	int a,b,c;
	fp=fopen("suma.txt", "w");
	if(fp!=NULL){
		printf("\n Introduce un valor para a: ");
		scanf("%d",&a);
		printf("\n Introduce un valor para b: ");
		scanf("%d",&b);
		c=a+b;
		printf("\n La suma de a y b es: %d",c);
		fscanf(fp,"%d %d",&a,&b);
		fprintf(fp,"%d + %d = %d", a,b,c);
	fclose(fp);
	}
	return 0;
};
