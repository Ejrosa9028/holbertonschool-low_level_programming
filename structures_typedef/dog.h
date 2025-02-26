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

/*Define un nuevo tipo como alias de struct dog*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif /* DOG_H */
