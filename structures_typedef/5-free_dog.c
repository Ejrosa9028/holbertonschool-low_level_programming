#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a dog
 * @d: Pointer to the dog to be freed
 *
 * Description: This function frees all dynamically allocated memory
 * used by a dog structure.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)  /* Check if the dog pointer is not NULL */
	{
		free(d->name);   /* Free the memory allocated for the name */
		free(d->owner);  /* Free the memory allocated for the owner */
		free(d);         /* Free the memory allocated for the dog structure */
	}
}

