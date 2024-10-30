#include "main.h"
/**
 * swap_int - Imprime si es Fizz o Buzz
 *
 * @a: recoge el numero del resultado
 *
 * @b: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
