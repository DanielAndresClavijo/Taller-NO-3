/*
*PROGRAMA: Calcular area de 5 circulos
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int i;
	float radio, area, pi;
	pi = 3.14159;
	printf("Ingrese el radio de cinco circulos paraa encontrar el area \n");
	//Ciclo for
	for(i=1;i<=5;i++)
	{
	scanf("%f", &radio);
	printf("\n");
	area = pi*(radio*radio);
	printf("El area del circulo es %f\n \n",area);
	}
	return 0;
}
