#include <stdio.h>

void main()
{
	char nombre[10], descP1[10], descP2[10];
	int cedula;
	float  cantP1, cantP2,precioP1,precioP2,pVtaP1,pVtaP2,subtotal=0,iva,total=0;
	printf("ingrese nombre del cliente");
	scanf("%s",&nombre);
	printf("ingrese la cedula");
	scanf("%d",&cedula);
	printf("datos de producto 1\n");
	printf("ingrese la descripcion:");
	scanf("%s",&descP1);
	printf("ingrese la cantidad");
	scanf("%f",&cantP1);
	printf("ingrese el precio");
	scanf("%f",&precioP1);
	printf("datos de producto 2\n");
	printf("ingrese la descripcion");
	scanf("%s",&descP2);
	printf("ingrese la cantidad");
	scanf("%f",&cantP2);
	printf("ingrese el precio");
	scanf("%f",&precioP2);
	pVtaP1=cantP1*precioP1;
	pVtaP2=cantP2*precioP2;
	subtotal=pVtaP1+pVtaP2;
	iva=subtotal*0.12;
	total=subtotal+iva;
	printf("\t\t\t\t*****empresa XYZ*******\n");
	printf("cliente: %s\n",nombre);
	printf("cedula: %d\n",cedula);
	printf("descripcion\tcantidad\tprecio\t\tPVta\n");
	printf("%s\t\t%.0f\t\t%.2f\t\t%.2f\n",descP1,cantP1,precioP1,pVtaP1);
	printf("%s\t\t%.0f\t\t%.2f\t\t%.2f\n",descP2,cantP2,precioP2,pVtaP2);
	printf("\t\t\t\t\t\tIVA:%.2f\n",iva);
	printf("\t\t\t\t\t\tSubtotal:%.2f\n",subtotal);
	printf("\t\t\t\t\t\tTotal:%.2f\n",total);
}
