/*
*PROGRAMA: Mostrar los multiplos de 4 entre 64 y 4
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int i;
	//Ciclo for
	for(i=16;i>=1;i--)
	{
		printf("%d\n",i*4);
	}
	return 0;
}
