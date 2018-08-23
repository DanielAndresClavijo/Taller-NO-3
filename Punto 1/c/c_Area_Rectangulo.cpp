/*
*PROGRAMA: Calcula el area de un rectangulo
*FECHA: 16 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	int altura, base, area;
	
	printf("Ingrese la base del rectangulo\n");
	scanf("%d", &base);
	
	printf("Ingrese la altura del rectanglo\n");
	scanf("%d", &altura);
	
	area = base*altura;
	
	printf("El  area del rectangulo es de %d\n", area);
	return 0;
}

