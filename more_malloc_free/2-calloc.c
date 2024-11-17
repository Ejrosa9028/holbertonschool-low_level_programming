#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of size bytes each,
 *           and initializes the memory to zero.
 * @nmemb: The number of elements.
 * @size: The size of each element.
 *
 * Return: A pointer to the allocated memory, or NULL if nmemb or size is 0,
 *         or if malloc fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	/*Si nmemb o size son 0, devolvemos NULL*/
	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	/*Asignamos memoria para nmemb * size bytes*/
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
	{
		return (NULL);  /*Si malloc falla, devolvemos NULL*/
	}

	/*Inicializamos la memoria a cero*/
	for (i = 0; i < (nmemb * size); i++)
	{
		((char *)ptr)[i] = 0;
	}

	return (ptr);
}
