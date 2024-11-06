#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a new line.
 * @s: The string to print.
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /*Si llegamos al final de la cadena*/
	{
		_putchar('\n'); /*Imprime salto de linea*/
		return;
	}
	_putchar(*s); /*Imprime el primer caracter*/
	_puts_recursion(s + 1); /*Llamamos recursivamente con el siguente caracter*/
}
