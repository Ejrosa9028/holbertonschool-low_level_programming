#include <stdio.h>
#include <stdlib.h>


/**
 * main - copies the string pointed to by src
 * @argc: pointer to the destination buffer
 * @argv: pointer to the source string
 *
 * Return: pointer to dest
 */
int main(int argc, char *argv[])
{
	int i;
	(void)argv;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
