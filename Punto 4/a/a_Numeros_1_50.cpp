/*
*PROGRAMA: Imprime en pantalla los numeros del 1 al 50
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int i;
	i=0;
	//Ciclo while
	while(i<=49)
	{
		if(i<=49)
		{
			i=i+1;
			printf("%d\n",i);
		}
	}
	return 0;
}
