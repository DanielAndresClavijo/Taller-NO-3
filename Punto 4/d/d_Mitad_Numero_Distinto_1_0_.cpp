/*
*PROGRAMA: Mitad de un numero que no sea 0 o 1
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{	
	float i, mitad; 
	int sn;
	printf("ingrese un numero que no sea 0 o 1\n");
	scanf("%f",&i);
	if(i!=0 or i!=1)
	{
		while (i > 1)
		{
			mitad=i/2;
			printf("La mitad del numero %f es %f\n \n",i,mitad);
			printf("¿Desea saber la mitad de ortro numero que no sea 0 o 1? si(ingrese 1) no (ingrese 0)\n");
			scanf("%d",&sn);
			if(sn==1)
			{
				printf("ingrese un numero que no sea 0 o 1\n");
				scanf("%f",&i);
			}else if(sn==0)
			{
				i=0;
			}else
			{
				printf("El valor ingresado es incorrecto\n");
				i=0;
			}
		}
	}
	if(i==0)
	{
		printf("Has ingresado 0\n Fin del programa");
	}else if(i==1)
	{
		printf("Has ingresado 1\n Fin del programa");
	}
	
	return 0;
}
