#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog structure
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/* prototype for function that initialize a variable of the dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner);

/* prototype for function that prints the struct dog */
void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */
