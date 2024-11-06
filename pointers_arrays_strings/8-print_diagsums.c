#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix.
 * @a: The matrix to print the diagonal sums from.
 * @size: The size of the matrix (size x size).
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0;
	int i;

	/*Sumar los elementos de la diagonal principal*/
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];  /*Elemento de la diagonal principal*/
	}

	/*Sumar los elementos de la diagonal secundaria*/
	for (i = 0; i < size; i++)
	{
		sum2 += a[i * size + (size - 1 - i)];  /*Elemento de la diagonal secundaria*/
	}

	/*Imprimir las sumas de las diagonales*/
	printf("%d, %d\n", sum1, sum2);
}
