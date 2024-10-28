#include "main.h"
/**
 * print_most_numbers- Imprime si es uppercase o lowercase
 * @void: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void print_most_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
