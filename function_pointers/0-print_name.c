#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - imprime un nombre usando una función dada
 * @name: nombre de la persona
 * @f: puntero a la función que procesa el nombre
 *
 * Return: Nada
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name); /*Llama a la funcion con el name como argumento*/
	}
}
