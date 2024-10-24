#include <stdio.h>

/**
 * main - Generates a random number and prints whether it is positive,
 *        negative, or zero.
 *
 * Return: 0 on success
 */

int main(void)
{
	char lower_character = 'a';
	char upper_character = 'A';
	int i = 0;
	int x = 0;

	while (i < 26)
	{
		putchar (lower_character);
		lower_character = lower_character + 1;


		i++;

		if (i == 26)
		{
			while (x < 26)
			{
				putchar (upper_character);
				upper_character = upper_character + 1;

				if (x == 25)
				{
					putchar ('\n');
				}

				x++;
			}
		}
	}

	return (0);
}
