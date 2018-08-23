/*
*PROGRAMA: convertir pesos colombianos a dolares
*FECHA: 16 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
//Definicion de variables
int dinero1, dinero2, valor;
//Conversion peso - dolar
    printf("Ingrese el valor del dolar en pesos colombianos\n");
	scanf("%d", &dinero1);
	printf("Ingrese la cantidad de dolares que tiene\n");
	scanf("%d", &dinero2);
	valor = dinero1*dinero2;
	printf("El valor de dolares que tiene en pesos colombianos es de %d\n", valor);
	return 0;
}

