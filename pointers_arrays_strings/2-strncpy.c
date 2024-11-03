#include "main.h"

/**
 * _strncpy - copies a string up to n characters
 * @dest: pointer to the destination string
 * @src: pointer to the source string
 * @n: maximum number of bytes to copy from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *original_dest = dest;

	while (n > 0)
	{
		if (*src)
		{
			*dest = *src;
		}
		else
		{
			*dest = '\0';
		}
		dest++;
		src++;
		n--;
	}

	return (original_dest);
}
