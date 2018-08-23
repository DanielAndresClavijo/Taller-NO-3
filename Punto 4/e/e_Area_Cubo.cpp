/*
*PROGRAMA: Area de un cubo mientras sus lados no sean 0
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{	
	int l, area, sn;
	printf("Ingrese el lado de una de las caras del cubo qeu no sea 0\n");
	scanf("%d",&l);
	if(l!=0)
	{
		while (l>0)
		{
			area=6*(l*l);
			printf("El area del cubo %d\n \n",area);
			printf("¿Desea saber el area de otro cubo? si(ingrese 1) no (ingrese 0)\n");
			scanf("%d",&sn);
			if(sn==1)
			{
				printf("Ingrese el lado de una de las caras del cubo qeu no sea 0\n");
				scanf("%d",&l);
			}else if(sn==0)
			{
				l=0;
			}else
			{
				printf("El valor ingresado es incorrecto\n");
				l=0;
			}
		}
	}
	if(l==0)
	{
		printf("Fin del programa\n");
	}
	
	return 0;
}
