/*
 * File: 2-print_dog.c
 * Author: Oghenemeru G. Avwemoya
 */

#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * print_dogv-v
 * @d: the particular dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->age <= 0)
		printf("Age: (nil)\n");
	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}
