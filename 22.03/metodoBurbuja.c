#include<stdio.h>

int main (void)
{
	/*Declaramos el array de numeros */
	int vector[7] = {3, 2, 4, 1,5, 4, 9, 6};
	int aux, i, j;

	/* Ordenamos el array de numeros*/
	for (i=0; i <=6; i++)
		for (j=7; j>=i+1; j--)
			if (vector[j-1]>vector[j])	
			{
				aux = vector[j];
				vector[j] = vector[j-1];
				vector[j-1] = aux;
			}
	
	/*Mostramos el array de numeros */
	for (i=0; i<=7; i++)
		printf ("%d ", vector[i]);
} 
