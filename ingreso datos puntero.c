#include <stdio.h>
void ingresodatos(char[],int ,float ,char *,int *,float *);
void modificaciondatos(char *,int *,float *);
void main(){
	char frase[10],*f;
	int num,*n;
	float numero,*n1;
	printf("ingrese la frase:");
	gets(frase);
	printf("ingrese un numero entero:");
	scanf("%d",&num);
	printf("ingrese un numero flotante:");
	scanf("%f",&numero);
	ingresodatos(frase,num,numero,f,n,n1);
		
}

void ingresodatos(char frase[],int num,float numero,char *f,int *n, float *n1){
	f=frase;
	n=&num;
	n1=&numero;
	printf("Frase: %s\n",f);
	printf("Numero Entero: %d\n",*n);
	printf("Numero Flotante: %.2f\n",*n1);
	modificaciondatos(f,n,n1);
}

void modificaciondatos(char *f,int *n, float *n1){
	printf("Frase origina: %s\n",f);
	printf("Numero Entero original: %d\n",*n);
	printf("Numero Flotante original: %.2f\n",*n1);
	fflush(stdin);
	printf("ingrese la nueva frase:");
	gets(f);
	printf("ingrese un nuev numero entero:");
	scanf("%d",&n);
	printf("ingrese un nuevo numero flotante:");
	scanf("%f",&n1);
	printf("Frase: %s\n",f);
	printf("Numero Entero: %d\n",*n);
	printf("Numero Flotante: %.2f\n",*n1);
}

