#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>

/**
 * get_op_func - Seleciona la funcion correcta para realizar la operacion.
 * @s: El operador pasa como argumento al programa.
 * Return: Un puntero a la función que corresponde al operador.
 */
int (*get_op_func(char *s))(int a, int b)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL)
	{
		if (*s == *(ops[i].op))
		{
			return (ops[i].f);
		}

		i++;
	}

	return (NULL);
}
