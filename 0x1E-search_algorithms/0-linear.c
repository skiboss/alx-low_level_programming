#include <stdio.h>
#include <stdlib.h>

/**
 * linear_search - searches for a specific value in an
 * array of integers using linear search algorithm
 *
 * @array: pointer to the first element in the array
 * @size: array size
 * @value: element to search for in array
 *
 * Return: -1 if array null or value absent, else return value
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int x;

	if (array == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		printf("Value checked array[%d] = [%d]\n", x, array[x]);
		if (array[x] == value)
			return (x);

	}
	return (-1);
}
