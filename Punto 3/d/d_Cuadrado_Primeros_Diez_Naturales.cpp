/*
*PROGRAMA: Mostrar los cuadrados de los diez primeros numeros naturales
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int i;
	printf("Cuadrado de los diez primeros numeros naturales\n");
	//Ciclo for
	for(i=0;i<=9;i++)
	{
		printf("%d ^2 - %d\n",i,i*i);
	}
	return 0;
}
