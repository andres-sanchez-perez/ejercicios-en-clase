/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int tabla,limite,cont,mult=0;
    printf("ingrese la tabla que va a realizar:");
    scanf("%d",&tabla);
    printf("ingrese el limite de la tabla:");
    scanf("%d",&limite);
    for (cont=1;cont<=limite;cont++)
    {
        mult=tabla*cont;
        printf("la multiplicacion de %d X %d es:%d\n",tabla,cont,mult);
    }
}
