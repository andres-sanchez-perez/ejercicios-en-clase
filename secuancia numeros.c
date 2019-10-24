/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void main()
{
    int cont=1, nnum,acu=0;
    printf("Cuantos numeros va a ingresar:");
    scanf("%d",&nnum);
    while(cont<=nnum)
    {
        acu=acu+cont;
        printf("%d\n",cont);
        cont++;
    }
    printf("la suma de %d numeros es:%d\n",nnum,acu);
}

