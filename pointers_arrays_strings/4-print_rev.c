#include "main.h"

/**
 * print_rev - Imprime si es Fizz o Buzz
 *
 * @s: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
void print_rev(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		s++;
		length++;
	}

	while (length >= 0)
	{
		_putchar(*s);

		s--;
		length--;
	}

	_putchar('\n');
}
