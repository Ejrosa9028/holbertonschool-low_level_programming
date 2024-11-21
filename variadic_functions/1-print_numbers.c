#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>  /*Necesario para funciones variádicas*/

/**
 * print_numbers - Imprime números seguidos por un separador.
 * @separator: La cadena que se imprimirá entre los números.
 * @n: El número de enteros a imprimir.
 *
 * Return: Nada. Imprime los números seguidos por un separador,
 * y una nueva línea al final.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	/*Inicializa la lista de parámetros*/
	va_start(args, n);

	/*Recorre los parámetros*/
	for (i = 0; i < n; i++)
	{
		/*Imprime el número*/
		printf("%d", va_arg(args, int));

		/*Si no es el último número, imprime el separador (si no es NULL)*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	/*Imprime la nueva línea al final*/
	printf("\n");

	/*Limpia el acceso a la lista de parámetros*/
	va_end(args);
}

