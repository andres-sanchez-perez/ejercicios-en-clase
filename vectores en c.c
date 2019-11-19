#include <stdio.h>
#include <stdlib.h>
#define tam 10

void inicializaArreglo(int[]);
void datosarreglo(int);
void main()
{
    int cant,numero,op;
    int arreglo[tam]={2,4,5,-1};
    do
    {
        printf("*****menu principal*****\ningrese 1 para mostrar un vector inicializado\ningrese 2 para ingresar datos a un vector\ningrese 3 para salir del programa\n");
        printf("ingrese una opción:");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                inicializaArreglo(arreglo);
            break;
            case 2:
                printf("ingrese la cantidad elementos que ingresara:");
                scanf("%d",&cant);
                datosarreglo(cant);
            break;
            case 3:
                exit(0);
            default:
                printf("opcion invalida, ingrese otra opcion\n");
                getchar();getchar();
                system("clear");
        }
    }while(op!=3);
    
    
    
    
    
}
void inicializaArreglo(int vector[tam])
{
    int cont=0;
    while(cont<4)
    {
        printf("arreglo[%d]=%d\n",cont,vector[cont]);
        cont++;
    }
    getchar();getchar();
    system("clear");
}
void datosarreglo(int cant)
{
    int cont=0,arreglo[tam],cont2=0;
    while(cont<cant)
    {
        printf("ingrese un numero en la posicion [%d] del vector:",cont);
        scanf("%d",&arreglo[cont]);
        cont++;
    }
    while(cont2<cant)
    {
        printf("el numero ingresado en la posicion [%d] del vector es:%d\n",cont2,arreglo[cont2]);
        cont2++;
    }
    getchar();getchar();
    system("clear");
}

