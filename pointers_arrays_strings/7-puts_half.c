#include "main.h"
#include "2-strlen.c"
/**
 * puts_half - Imprime si es Fizz o Buzz
 *
 * @str: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void puts_half(char *str)
{
	int length = _strlen(str);
	int start = 0;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length - 1) / 2 + 1;
	}

	while (str[start] != '\0')
	{
		_putchar(str[start]);

		start++;
	}

	_putchar('\n');
}
