/*
*PROGRAMA: Programa para calcular el area de un triangulo
*FECHA: 16 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
//Definicion de variables 
int area, base, altura;
//Calculo area - triangulo
    printf("Ingrese base del triangulo\n");
	scanf("%d", &base);
	printf("Ingrese altura del triangulo\n");
	scanf("%d", &altura);
	area =(base*altura)/2;
	printf("El area del triandulo es %d\n", area);
	return 0;
}

