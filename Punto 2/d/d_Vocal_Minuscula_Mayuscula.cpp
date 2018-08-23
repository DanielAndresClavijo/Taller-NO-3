/*
*PROGRAMA: Determina si  el caracter ingresado es una vocal minuscula o una vocal mayuscula
*FECHA: 18 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de varirables
	char caracter;
	char a='a';
	char e='e';
	char i='i';
	char o='o';
	char u='u';
	char A='A';
	char E='E';
	char I='I';
	char O='O';
	char U='U';
	printf("Ingrese un caracter \n");
	scanf("%c", &caracter);
	//Proceso 
	if (caracter==a or caracter==e or caracter==i or caracter==o or caracter==u){
		printf("El caracter es una vocal minuscula");
	}else if (caracter==A or caracter==E or caracter==I or caracter==O or caracter==U){
		printf("El caracter es una vocal mayuscula");
	}else{
		printf("No has ingresado un caracter o el caracter es una consonante");
	}	
	return 0;
}
