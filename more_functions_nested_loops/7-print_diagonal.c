#include "main.h"
/**
 * print_diagonal - Imprime si es uppercase o lowercase
 * @n: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}

		_putchar('\\');
		_putchar('\n');
	}
}
