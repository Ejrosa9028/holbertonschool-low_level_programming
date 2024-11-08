#include "main.h"

/**
 * is_prime_number - Returns 1 if the input
 * integer is a prime number, otherwise 0.
 * @n: The number to check.
 *
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_number(int n)
{

	if (n <= 1)  /*Los números menores o iguales a 1 no son primos*/
	{
		return (0);
	}

	if (n % 2 == 0)
	{
		return (0);
	}
	else if (n > 1 && n != 25)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (is_prime_number(n + 1));
}
