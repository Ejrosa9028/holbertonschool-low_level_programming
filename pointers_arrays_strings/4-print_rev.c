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

	while (s[length] != '\0')
	{
		length++;
	}

	while (length > 0)
	{
		_putchar(s[length - 1]);
		length--;
	}

	_putchar('\n');
}
