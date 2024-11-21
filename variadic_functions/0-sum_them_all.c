#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>  /*Necesario para las funciones variádicas*/

/**
 * sum_them_all - Suma todos los parámetros dados.
 * @n: El número de parámetros.
 *
 * Return: La suma de los parámetros. Si n es 0, devuelve 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list args;

	/*Si no se pasan parámetros, retorna 0*/
	if (n == 0)
		return (0);

	/*Inicializa la lista de parámetros*/
	va_start(args, n);

	/*Recorre los parámetros y los suma*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);  /*Obtiene el siguiente argumento y lo suma*/
	}

	/*Limpia el acceso a la lista de parámetros*/
	va_end(args);

	return (sum);
}

