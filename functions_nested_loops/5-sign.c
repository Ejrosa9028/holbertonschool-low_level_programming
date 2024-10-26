#include "main.h"
/**
 * print_sign - checks if a character is lowercase
 * @n: the character to be checked
 *
 * Return: 1 if c is lowercase, 0 otherwise
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
