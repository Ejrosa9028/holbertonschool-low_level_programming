#include "main.h"
#include <stdio.h>
#include "2-strlen.c" /* Llamamos a la funcion 2-strlen.c*/

/**
 * rev_string - Imprime si es Fizz o Buzz
 *
 * @s: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void rev_string(char *s)
{
	int length = _strlen(s); /*Estamos igualando length a la funcion _strlen(s)*/
	int star = 0;
	int end = length - 1;

	while (star < end)
	{
		char tmp = s[star];

		s[star] = s[end];
		s[end] = tmp;

		star++;
		end--;
	}
}
