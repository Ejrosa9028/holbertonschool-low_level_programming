#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number to calculate the factorial of.
 *
 * Return: The factorial of the number, or -1 if the number is negative.
 */
int factorial(int n)
{
	if (n < 0) /*Si el numero es negativo, devuelvo -1*/
	{
		return (-1);
	}
	else if (n == 0) /*Si el numero es 0, devuelvo 1*/
	{
		return (1);
	}
	return (n * factorial(n - 1)); /*Calcula el factorial*/

}
