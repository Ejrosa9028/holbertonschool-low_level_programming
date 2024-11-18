#include "dog.h"
#include <stddef.h>

/**
 * init_dog - Initializes a variable of type struct dog
 * @d: Pointer to the struct dog to be initialized
 * @name: Pointer to the dog's name
 * @age: Age of the dog
 * @owner: Pointer to the dog's owner
 *
 * Description: This function takes a pointer to a struct dog and
 * initializes its fields with the provided values for name, age,
 * and owner.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d != NULL)  /* Check if the pointer is not NULL */
    {
        d->name = name;   /* Initialize the name of the dog */
        d->age = age;     /* Initialize the age of the dog */
        d->owner = owner; /* Initialize the owner of the dog */
    }
}
