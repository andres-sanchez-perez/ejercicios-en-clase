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
void main ()
{
  float radio;
  int num,base,limite;
  printf("Area de un circulo\n.");
  printf ("ingrese el radio del circulo:");
  scanf ("%f", &radio);
  printf ("el area del circulo es:%.2f\n", areacirculo (radio));
  printf("factorial de un numero\n");
  printf("ingrese un numero:");
  scanf("%d",&num);
  printf("el factorial del numero es:%d\n",factorial(num));
  printf("taba de multiplicar\n");
  printf("ingrese la tabla a multiplicar");
  scanf("%d",&base);
  printf("ingrese el limite de la tabla");
  scanf("%d",&limite);
  tabla(base,limite);
}
