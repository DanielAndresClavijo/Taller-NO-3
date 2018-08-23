/*
*PROGRAMA: Determina si el numero es par o impar
*FECHA: 18 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int n;
	printf("Ingrese un numero \n");
	scanf("%d", &n);
	//Sentencia condicional
	if (n%2==1){
		printf("El numero es impar");
	}else if (n%2==0){
		printf("El numero es par");
	}	
	return 0;
}
