#ifndef _DOG_H
#define _DOG_H

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
} Dog;

// prototype for function that initialize a variable of the dog structure
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif /* _DOG_H */
