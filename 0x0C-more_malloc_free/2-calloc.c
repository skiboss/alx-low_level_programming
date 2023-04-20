#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for array
 * @nmemb: number of elements in array
 * @size: size of elements
 * Return: pointer to allocated memory and NULL if fails
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int t;

	if (nmemb < 1 || size < 1)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (t = 0; t < nmemb * size; t++)
		array[t] = 0;

	return (array);
}
