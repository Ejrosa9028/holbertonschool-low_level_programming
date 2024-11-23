#include <stdio.h>
#include <stdarg.h>  /*Para manejar los argumentos variádicos*/
/**
 * print_all - Imprime diferentes tipos de datos dependiendo del formato.
 * @format: Especifica los tipos de argu (c: char, i: int, f: float, s: char *)
 *
 * Return: Imprime valores y maneja correctamente los valores NULL para cadenas
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list args;

	va_start(args, format); /*Inicializa la lista de argumentos variadicos*/
	while (format && format[i] != '\0') /*Mientras haya un formato en la cadena*/
	{
		switch (format[i])
		{
			case 'c':
				printf("%c, ", va_arg(args, int));
				break;

			case 'e':
				printf("%d, ", va_arg(args, int));
				break;

			case 'f':
				printf("%f, ", va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
				{
					printf("(nil)");
				}
					printf("%s", str);
				break;

			default:
				i++;
				continue;

		} i++;
	} printf("\n"); /*Imprime una nueva linea al final*/
	va_end(args); /*Limpia la lista de argumentos*/
}

