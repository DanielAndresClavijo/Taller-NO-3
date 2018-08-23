/*
*PROGRAMA: Promedio de 3 notas para n estudiantes
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
int main()
{
	//Definicion de variables
	int n, i;
	float nota1, nota2, nota3, promedio;
	printf("Ingrese la cantidad de estudiantes que deseean saber su promedio\n");
	scanf("%d",&n);
	printf("\n");
	//Ciclo for
	for(i=1;i<=n;i++)
	{
		printf("Estudiante %d ingrese sus tres notas\n",i);
		scanf("%f",&nota1);
		scanf("%f",&nota2);
		scanf("%f",&nota3);
		promedio=(nota1+nota2+nota3)/3;
		printf("El promedio del estudiante %d es de %f\n \n",i,promedio);
	}
	return 0;
}
