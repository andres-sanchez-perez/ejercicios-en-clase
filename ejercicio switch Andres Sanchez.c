/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

void
main ()
{
  int opcion,n=0;
  float a, b, c, x1 = 0, x2 = 0, base, alt, area = 0;
  do{
      printf ("Menu principal\n1.Ecuacion Cuadratica\n2.Area del triangulo\n");
      printf ("escoja la opcion:");
      scanf ("%d", &opcion);
      switch (opcion)
      {
        case 1:
            printf ("ingrese el coeficiente a:");
            scanf ("%f", &a);
            printf ("ingrese coeficiente b:");
            scanf ("%f", &b);
            printf ("ingrese el coeficiente c");
            scanf ("%f", &c);
            x1 = (-b + (sqrt (pow (b, 2) - 4 * a * c))) / (2 * a);
            x2 = (-b - (sqrt (pow (b, 2) - 4 * a * c))) / (2 * a);
            printf ("el resultado 1 es:%.2f\nel resultado 2 es:%.2f", x1, x2);
            n=1;
            break;
        case 2:
            printf ("ingrese la base:");
            scanf ("%f", &base);
            printf ("ingrese la altura:");
            scanf ("%f", &alt);
            area = (base * alt) / 2;
            printf ("el area del triangulo es:%.2f", area);
            break;
            n=1;
        default:
            printf("opcion incorrecta, ingrese otro numero\n");
            break;
      }
    } while(n==0);
}



