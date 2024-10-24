#include <stdio.h>

/**
 * main - Generates a random number and prints whether it is positive,
 *        negative, or zero.
 *
 * Return: 0 on success
 */
int main(void)
{
	int i = 0;
	char num = '0';
	char letter = 'a';

	while (i < 10)
	{
		putchar(num);
		num++;

		i++;
	}

	while (i < 16)
	{
		putchar(letter);
		letter++;

		i++;
	}

	putchar('\n');

	return (0);
}
