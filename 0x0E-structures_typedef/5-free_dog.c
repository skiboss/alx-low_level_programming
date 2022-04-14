/*
 * Author: Oghenemeru G. Avwemoya
 * File: 5-free_dog.c
 */
#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * free_dog - Entry
 * @d: the structure to free
 * return: O
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
		return;
	free(d);
}
