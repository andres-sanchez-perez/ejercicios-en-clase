/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

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
void main ()
{
  float radio;
  int num,base,limite,opcion;
  do
  {
    printf("Menu Principal\ningrese 1 para calcular el area del circulo\ningrese 2 para calcular un factorial\ningrese 3 para mostrar una tabla de mutiplicar\ningrese 4 para ver si el numero es par o impar\ningrese 5 para salir\n");
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
    }
  }while(opcion<5);
}
