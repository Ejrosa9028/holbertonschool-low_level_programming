#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
 * op_add - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - Adds two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
