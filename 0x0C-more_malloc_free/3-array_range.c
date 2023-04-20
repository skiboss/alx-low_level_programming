#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: pointer to new array and NULL if fails
*/
int *array_range(int min, int max)
{
	int *array;
	int t = 0, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(size * sizeof(int));

	if (array == NULL)
		return (NULL);

	for (; t < size; t++, min++)
		array[t] = min;

	return (array);
}
