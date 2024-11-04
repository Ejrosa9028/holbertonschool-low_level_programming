#include "main.h"

/**
 * leet - Imprime si es Fizz o Buzz
 *
 * @str: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
char *leet(char *str)
{
	int i = 0;
	int j = 0;

	char leet_char[] = "43071";
	char original_chars[] = "aeotlAEOTL";

	for (; str[i] != '\0'; i++)
	{
		for (; original_chars[j] != '\0'; j++)
		{
			if (str[i] == original_chars[j])
			{
				str[i] = leet_char[j];
			}
		}
	}

	return (str);
}
