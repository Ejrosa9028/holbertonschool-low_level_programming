#include "main.h"
/**
 * puts2 - Imprime si es Fizz o Buzz
 *
 * @str: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void puts2(char *str)
{
	int length = 0;
	int num = 0;

	while (str[length] != '\0')
	{
		num = length % 2;

		if (num == 0)
		{
			_putchar(str[length]);
		}
		length++;
	}
	_putchar('\n');
}
