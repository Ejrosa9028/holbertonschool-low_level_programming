#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	int i = 0;
	char separators[] = " \t\n,;.!?\"(){}";

	for (; separators[i] != '\0'; i++)
	{
		if (c == separators[i])
		{
			return (1);
		}
	}
	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to the string to be modified
 *
 * Return: pointer to the modified string
 */
char *cap_string(char *str)
{
	int capitalize_next = 1;
	char *ptr = str;

	while (*ptr)
	{
		if (capitalize_next && *ptr >= 'a' && *ptr <= 'z')
		{
			*ptr -= 32;
		}
		capitalize_next = is_separator(*ptr) ? 1 : 0;
		ptr++;
	}

	return (str);
}
