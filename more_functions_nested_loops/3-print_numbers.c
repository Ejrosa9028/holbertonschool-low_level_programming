#include "main.h"
/**
 * print_numbers - Imprime si es uppercase o lowercase
 * @void: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void print_numbers(void)
{
	int i = 0;

	for (; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
