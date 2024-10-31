#include "main.h"
/**
 * _puts - Imprime si es Fizz o Buzz
 *
 * @str: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);

		str++;
	}

	_putchar('\n');
}
