/*
*PROGRAMA: Calcula un dia de la semana
*FECHA: 18 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables                  
	int n;
	//Captura de datos
	printf("Ingrese un numero del 1 al 7\n");
	scanf("%d", &n);
	//Sentencias de decision para calcular el dia de la semana 
	if (n==1){
		printf("El dia %d de la semana es Lunes ",n);
	}else if (n==2){
			printf("El dia %d de la semana es Martes ",n);
	}		
	else if (n==3){
			printf("El dia %d de la semana es Miercoles ",n);
	}		
	else if (n==4){
			printf("El dia %d de la semana es Jueves",n);
	}		
	else if (n==5){
			printf("El dia %d de la semana es Viernes ",n);
	}		
	else if (n==6){
			printf("El dia %d de la semana es Sabado ",n);
	}		
	else if (n==7){
			printf("El dia %d de la semana es Domingo ",n);
	}		
	else{
		printf("El numero que ingreso es incorrecto");
	}
	return 0;
}
