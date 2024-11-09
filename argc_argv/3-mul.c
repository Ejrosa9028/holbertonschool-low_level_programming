#include <stdio.h>
#include <stdlib.h> /*Por atoi*/

/**
 * main - copies the string pointed to by src
 * @argc: pointer to the destination buffer
 * @argv: pointer to the source string
 *
 * Return: pointer to dest
 */
int main(int argc, char *argv[])
{
	int num1, num2;
	/*Comprueba si se pasan exactamente dos argumentos*/
	/*(sin contar el nombre del programa)*/
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	/*Convierte argumento en enteros*/
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	/*Imprime el resultado de la multiplicacion*/
	printf("%d\n", num1 * num2);

	return (0);
}
