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
} dog;
/* prototype for function that initialize a variable of the dog structure */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* DOG_H */
