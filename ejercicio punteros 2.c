/*Realizar un programa en C que tenga 2 funciones:
inicializar los elementos en un arreglo.
ingresar los elementos del arreglo por teclado usando punteros*/
#include <stdio.h>
#include <string.h>
void inicializararreglo(int [],int *);
void ingresoelementos(int [],int tam,int *);
void main(){
	int arreglo[]={2,-31,5,1,45,-25},*p,tam;
	printf("el tama%co del arreglo es %d",164,sizeof(arreglo)/sizeof(int));
	inicializararreglo(arreglo,p);
	printf("ingrese el tama%co:",164);
	scanf("%d",&tam);
	ingresoelementos(arreglo,tam,p);
}
void inicializararreglo(int arreglo[],int *p){
	int i;
	for(i=0;i<6;i++){
		printf("%d\n",arreglo[i]);
	}
}
void ingresoelementos(int arreglo[],int tam,int *p){
	int i;
	for(i=0;i<tam;i++){
		printf("ingrese el elemento numero %d:",++i);
		--i;
		scanf("%d\n",&arreglo[i]);
	}
	p=arreglo;
	for(i=0;i<tam;i++){
		printf("%d\n",*p++);
	}
}

