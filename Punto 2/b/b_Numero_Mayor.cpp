/*
*PROGRAMA: Determina el numero mayor
*FECHA: 18 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int n, i, mayor;
	printf("Ingrese 3 numeros \n");
	//Determinar el numero mayor 
	for(i=0;i<=2;i++){
	scanf("%d", &n);
	if (i==0){
		mayor=n;
	}else if (n>mayor){
		mayor=n;
	}		
	}
	printf("El numero mayor es %d", mayor);
	return 0;
}
