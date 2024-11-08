#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to calculate the square root of.
 *
 * Return: The square root of the number, or -1
 * if it doesn't have a natural square root.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));  /*Llamada auxiliar para comenzar desde 1*/
}

/**
 * _sqrt_helper - Recursivamente busca la raíz cuadrada.
 * @n: El número del cual queremos la raíz cuadrada.
 * @i: El valor que probamos como candidato para la raíz cuadrada.
 *
 * Return: La raíz cuadrada de n si existe, o -1 si no existe.
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}

	if (i * i > n)  /*Si i^2 es mayor que n, no tiene raíz cuadrada exacta*/
	{
		return (-1);
	}
	return (_sqrt_helper(n, i + 1));  /*Llamada recursiva incrementando i*/
}
