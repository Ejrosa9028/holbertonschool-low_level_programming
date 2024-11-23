#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <ctype.h>

/**
 * main - Realiza operaciones sencillas.
 * @argc: El número de argumentos pasados al programa.
 * @argv: La matriz de argumentos pasados al programa.
 * Return: 0 en caso de éxito, o sale un código de error en caso de fallo.
 */
int main(int argc, char *argv[])
{

	int num1, num2;
	int (*op_func)(int, int);

	/*Si no se pasa numero, imprime Error*/
	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);
}
