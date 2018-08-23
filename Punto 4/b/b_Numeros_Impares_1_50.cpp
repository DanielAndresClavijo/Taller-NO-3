/*
*PROGRAMA: Imprime en pantalla la suma de numeros impares del 1 al 50
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main() 
{	
	int i;
	i = 1;
	while (i <= 50)
	{
		printf("%d\n",i);
		i = i + 2;
	}
	return 0;
}
