/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

float areacirculo(float);
int factorial(int);
int tabla(int,int);
void ParImpar(int);
void PositivosNegativosCeros(int);
void promedioNotas(int,float);

float areacirculo (float radio)
{
  float area = 0, pi = 3.1416;
  area = pi * pow (radio, 2);
  return area;
}
int factorial(int num)
{
    int fact=1,cont;
    for (cont=1;cont<=num;cont++)
    {
        fact=fact*cont;
    }
    return fact;
}

int tabla(int base,int limite)
{
    int cont,mult=1;
    for (cont=1;cont<=limite;cont++)
    {
        mult=base*cont;
        printf("%d*%d=%d\n",base,cont,mult);
    }
}
void ParImpar(int num)
{
    if(num%2==0&&num!=0)
    {
        printf("es par");
    }
    else if(num==0)
    {
        printf("el %d no tiene signo ni paridad",num);
    }
    else
    {
        printf("es impar");
    }
}
void PositivosNegativosCeros(int limite)
{
    int cont,cont2=0,cont3=0,cont4=0,num;
    
    for (cont=1;cont<=limite;cont++)
    {
        printf("ingrese un numero:");
        scanf("%d",&num);
        if(num>0)
        {
            cont2++;
        }
        else if(num==0)
        {
            cont3++;
        }
        else
        {
            cont4++;
        }
    }
    printf("en este grupo existen %d numero positivos\n",cont2);
    printf("en este grupo existen %d ceros\n",cont3);
    printf("en este grupo existen %d numero negativos\n",cont4);
}
void promedioNotas(int nest,float nnotas)
{
    int cont1=1,acunnotas=0,estudiante=1,note=1;
    float nota,promedio=0;
    while(cont1<=nest)
    {
        int cont2=1;
        while(cont2<=nnotas)
        {
            printf("ingrese la nota %d del estudiante %d:",note,estudiante);
            scanf("%f",&nota);
            acunnotas=acunnotas+nota;
            cont2++;
            note++;
        }
        promedio=acunnotas/nnotas;
        printf("el promedio de notas del estudiante %d es:%.2f\n",estudiante,promedio);
        estudiante++;
        note=1;
        acunnotas=0;
        cont1++;
    }
}
void main ()
{
  float radio;
  int num,base,limite,opcion,nest;
  float nnotas;
  do
  {
    printf("Menu Principal\ningrese 1 para calcular el area del circulo\ningrese 2 para calcular un factorial\ningrese 3 para mostrar una tabla de mutiplicar\ningrese 4 para ver si el numero es par o impar\ningrese 5 para determinar cuantos numeros positivos, negativos y ceros hay en un grupo de numeros\ningrese 6 ara promedio de notas\ningrese 7 para salir\n");
    printf("escoja su opcion:");
    scanf("%d",&opcion);
    switch(opcion)
    {
        case 1:
            printf ("ingrese el radio del circulo:");
            scanf ("%f", &radio);
            printf ("el area del circulo es:%.2f\n", areacirculo (radio));
            getchar(); getchar();
            system("clear");
            break;
        case 2:
            printf("ingrese un numero:");
            scanf("%d",&num);
            printf("el factorial del numero es:%d\n",factorial(num));
            getchar(); getchar();
            system("clear");
            break;
        case 3:
            printf("ingrese la tabla a multiplicar");
            scanf("%d",&base);
            printf("ingrese el limite de la tabla");
            scanf("%d",&limite);
            getchar(); getchar();
            system("clear");
            tabla(base,limite);
            break;
        case 4:
            printf("ingrese un numero:");
            scanf("%d",&num);
            ParImpar(num);
            getchar(); getchar();
            system("clear");
            break;
        case 5:
            printf("¿Cuantos numeros desea ingresar?:");
            scanf("%d",&limite);
            PositivosNegativosCeros(limite);
            getchar(); getchar();
            system("clear");
        case 6:
            printf("ingrese el numero de estudiantes:");
            scanf("%d",&nest);
            printf("ingrese el numero de notas:");
            scanf("%f",&nnotas);
            promedioNotas(nest,nnotas);
            getchar(); getchar();
            system("clear");
            break;
    }
  }while(opcion<7);
}






