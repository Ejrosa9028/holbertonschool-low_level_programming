#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - copies the string pointed to by src
 * @height: pointer to the destination buffer
 * @width: pointer to the source string
 *
 * Return: pointer to dest
 */
int **alloc_grid(int width, int height)
{
	int **tmp;
	int i, j = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	tmp = malloc(sizeof(int *) * height);

	if (tmp == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		tmp[i] = malloc(sizeof(int) * height);
		if (tmp[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(tmp[j]);
				free(tmp);
				return (NULL);
			}
		}

		for (j = 0; j < width; j++)
		{
			tmp[i][j] = 0;
		}
	}

	return (tmp);
}
