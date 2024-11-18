#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the new dog (dog_t) or NULL if the function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;        /* Pointer to hold the new dog */
	size_t name_len, owner_len;

	/* Allocate memory for the new dog */
	d = malloc(sizeof(dog_t));
	if (d == NULL)  /* Check if malloc fails */
		return (NULL);

	/* Allocate memory for the name and owner */
	name_len = strlen(name) + 1;  /* +1 to include the null terminator */
	owner_len = strlen(owner) + 1;  /* +1 to include the null terminator */

	d->name = malloc(name_len);
	if (d->name == NULL)
	{
		free(d);  /* Free previously allocated memory */
		return (NULL);
	}

	d->owner = malloc(owner_len);
	if (d->owner == NULL)
	{
		free(d->name);  /* Free name if owner allocation fails */
		free(d);         /* Free dog structure */
		return (NULL);
	}

	/* Copy the name and owner into the newly allocated memory */
	strcpy(d->name, name);
	strcpy(d->owner, owner);

	/* Set the age of the dog */
	d->age = age;

	return (d);  /* Return the new dog */
}

