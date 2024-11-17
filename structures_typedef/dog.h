#ifndef DOG_H
#define DOG_H

/**
 * struct dog - defines a dog with its attributes
 * @name: a pointer to a char representing the dog's name
 * @age: a float representing the dog's age
 * @owner: a pointer to a char representing the dog's owner
 *
 * Description: This structure holds the information of a dog, including
 * its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif /* DOG_H */
