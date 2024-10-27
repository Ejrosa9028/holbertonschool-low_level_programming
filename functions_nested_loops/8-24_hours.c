#include "main.h"
/**
 * jack_bauer - Imprime el ultimo digito de un numero
 * @void: El numero del cual se extraera el ultimo digito
 *
 * Return: El valor del ultimo digito
 */

void jack_bauer(void)
{
	int hora;
	int minuto;

	for (hora = 0; hora < 24; hora++)
	{
		for (minuto = 0; minuto < 60; minuto++)
		{
			_putchar((hora / 10) + '0');
			_putchar((hora % 10) + '0');
			_putchar(':');
			_putchar((minuto / 10) + '0');
			_putchar((minuto % 10) + '0');
			_putchar('\n');
		}
	}
}
