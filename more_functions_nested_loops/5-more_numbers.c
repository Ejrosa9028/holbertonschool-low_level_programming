#include "main.h"
/**
 * more_numbers - Imprime si es uppercase o lowercase
 * @void: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void more_numbers(void)
{
	int x = 0;

	for (; x < 10; x++)
	{
		int i = 0;

		for (; i < 15; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
		_putchar('\n');

	}
}
