#include "main.h"
/**
 * times_table - Imprime el ultimo digito de un numero
 * @void: El numero del cual se extraera el ultimo digito
 *
 * Return: El valor del ultimo digito
 */

void times_table(void)
{
	int num_a;
	int num_b;
	int resultado;

	for (num_a = 0; num_a < 10; num_a++)
	{
		for (num_b = 0; num_b < 10; num_b++)
		{
			resultado = num_a * num_b;

			if (num_b != 0)
			{
				_putchar(',');
				_putchar(' ');

				if (resultado < 10)
				{
					_putchar(' ');
				}
			}

			if (resultado >= 10)
			{
				_putchar((resultado / 10) + '0');
			}
			_putchar((resultado % 10) + '0');

		}
		_putchar('\n');
	}
}
