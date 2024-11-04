#include "main.h"
#include <stddef.h>

/**
 * _strchr - Imprime si es Fizz o Buzz
 *
 * @s: recoge el numero del resultado
 *
 * @c: recoge el numero del resultado
 *
 * Return: El valor del ultimo digito
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0') {
		if (*s == c) {
			return s;
		}
		s++;
	}
	return (c == '\0') ? s : NULL;
}
