#include "main.h"
#include "main.h"
/**
 * print_triangle - Imprime si es uppercase o lowercase
 * @size: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void print_triangle(int size)
{
	int i, j;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}

		for (j = 0; j < i + 1; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
