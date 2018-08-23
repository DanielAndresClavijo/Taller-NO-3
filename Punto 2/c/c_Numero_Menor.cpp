/*
*PROGRAMA: Determina el numero menor
*FECHA: 18 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int n, i, menor;
	printf("Ingrese 3 numeros \n");
	i=1;
	while(i<=3){
		scanf("%d", &n);
		if (i==1){
			menor=n;
		}else if (n<menor){
			menor=n;
		}	
		i = i+1;
	}
	printf("El numero menor es %d", menor);
	return 0;
}
