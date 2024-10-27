#include "main.h"

/**
 * print_last_digit - Imprime el ultimo digito de un numero
 * @n: El numero del cual se extraera el ultimo digito
 *
 * Return: El valor del ultimo digito
 */
int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	_putchar(last_digit + '0');

	return (last_digit);
}
