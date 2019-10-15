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
  int opcion,n=0, anionacimiento, mesnacimiento, dianacimiento,anioactual, mesactual, diaactual, edadanios=0, edadmeses=0, edaddias=0;
  float a, b, c, x1 = 0, x2 = 0, base, alt, area = 0;
  char nombre[10];
  do{
      printf ("Menu principal\n1.Ecuacion Cuadratica\n2.Area del triangulo\n3.edad\n");
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
        case 3:
            printf("ingrese el nombre");
            scanf("%s",&nombre);
            printf("ingrese año de nacimiento:");
            scanf("%d",&anionacimiento);
            printf("ingrese mes de naciemiento:");
            scanf("%d",&mesnacimiento);
            printf("ingrese dia nacimiento:");
            scanf("%d",&dianacimiento);
            printf("ingrese año de actual:");
            scanf("%d",&anioactual);
            printf("ingrese mes de actual:");
            scanf("%d",&mesactual);
            printf("ingrese dia actual:");
            scanf("%d",&diaactual);
            edadanios=fabs(anioactual-anionacimiento);
            edadmeses=(mesactual-mesnacimiento);
            if(edadmeses<0)
            {
                edadanios=edadanios-1;
                edadmeses=edadmeses+12;
            }
            edaddias=(diaactual-dianacimiento);
            if(edaddias<0)
            {
                edadmeses=edadmeses-1;
                edaddias=edaddias+30;
            }
            printf("la edad de %s es de: %d años con %d meses y %d dias",nombre,edadanios,edadmeses,edaddias);
            n=1;
            break;
            
        default:
            printf("opcion incorrecta, ingrese otro numero\n");
            break;
      }
    } while(n==0);
}



