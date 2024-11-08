#include <stdio.h>

/**
 * main - copies the string pointed to by src
 * @argc: pointer to the destination buffer
 * @argv: pointer to the source string
 *
 * Return: pointer to dest
 */
int main(int argc, char *argv[])
{
	(void)argv;

	printf("%d\n", argc - 1);

	return (0);
}
