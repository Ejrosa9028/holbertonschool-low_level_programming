#include <stdio.h>
#include <stdarg.h>  /*Necesario para funciones variádicas*/

/**
 * print_strings - Imprime cadenas de caracteres separadas por un separador.
 * @separator: La cadena que se imprimirá entre las cadenas.
 * @n: El número de cadenas a imprimir.
 *
 * Return: Imprime las cadenas de caracteres, reemplazando NULL por (nil).
 * Imprime una nueva línea al final.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	char *str;

	/*Inicializa la lista de parámetros variádicos*/
	va_start(args, n);

	/*Recorre las cadenas de caracteres*/
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);  /*Obtiene la siguiente cadena*/

		/*Si la cadena es NULL, imprime "(nil)"*/
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		/*Si no es el último string y separator no es NULL, imprime el separator*/
		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}

	/*Imprime la nueva línea al final*/
	printf("\n");

	/*Limpia el acceso a los parámetros*/
	va_end(args);
}

