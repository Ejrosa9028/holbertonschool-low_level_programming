#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings with s of the second string.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes to concatenate from s2.
 *
 * Return: Pointer to the memory containing the concatenated string,
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int len_s1, len_s2, i, j;

	if (s1 == NULL) /*Si s1 es NULL, tratamos como cadena vacia*/
		s1 = "";

	if (s2 == NULL) /*Si s2 es NULL, tratamos como cadena vacia*/
		s2 = "";

	len_s1 = strlen(s1); /*Calculamos la longitud de las cadenas*/
	len_s2 = strlen(s2);

	if (n >= len_s2) /*Si n es mayor o igual, usamos la cadena s2*/
		n = len_s2;

	concat = malloc(len_s1 + n + 1); /*Asignsmod memoria para la nueva cadena.*/
	if (concat == NULL)
		return (NULL);  /*Si malloc falla, retornamos NULL*/

	for (i = 0; i < len_s1; i++) /*Copiamos s1 a la nueva cadena*/
		concat[i] = s1[i];

	for (j = 0; j < n; j++) /*Copiamos los primeros n de s2 a la nueva cadena*/
		concat[i + j] = s2[j];

	concat[i + j] = '\0'; /*Anadimos caracter nulo al final*/

	return (concat);
}

