#include <stdio.h>
/**
 * main - Generates a random number and prints whether it is positive,
 *        negative, or zero.
 *
 * Return: 0 on success
 */

int main(void)
{
	char character = 'a';
	int i = 0;

	while (i < 25)
	{
		putchar (character);
		character = character + 1;

		if (character == 'q')
		{
			character = character + 1;
		}

		if (i == 24)
		{
		putchar ('\n');
		}

		i++;
	}

	return (0);
}
