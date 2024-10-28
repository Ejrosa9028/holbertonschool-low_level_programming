#include "main.h"
/**
 * _isdigit - Imprime si es uppercase o lowercase
 * @c: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
