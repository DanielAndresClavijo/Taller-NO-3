/*
*PROGRAMA: Imprime en pantalla la suma de numeros primos del 1 al 50
*FECHA: 22 de agosto de 2018
*ELABORADO POR: Daniel Andres Clavijo Giraldo
*/
#include <stdio.h>
#include <math.h>
int main() 
{	
	int i, n, x, t;
	bool NumeroPrimo;
	printf("1 - 2\n");
	x = 1;
	t = 3;
	n=15;
	while (x < n) 
	{		
		NumeroPrimo = true;
		for (i=3;i<=sqrt(t);i+=2) 
		{
			if (t%i == 0) 
			{
				NumeroPrimo = false;				
			}
		}		
		if (NumeroPrimo) 
		{
			x = x + 1;
			printf("%d - %d\n",x,t);
		}
		t = t + 2;
	}
	return 0;
}

