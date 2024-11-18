#include <stdio.h>
#include "dog.h"

/**
 * print_dog - Prints a struct dog
 * @d: Pointer to the struct dog to be printed
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of the fields are NULL, it prints (nil) instead of the field value.
 * If d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;  /* If the struct pointer is NULL, do nothing */
	}

	/* Print name, age, and owner, handling NULL cases */
	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}

	printf("Age: %.6f\n", d->age);  /* Print age with 6 decimal places */

	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}

