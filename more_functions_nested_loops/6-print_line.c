#include "main.h"
/**
 * print_line - Imprime si es uppercase o lowercase
 * @n: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
