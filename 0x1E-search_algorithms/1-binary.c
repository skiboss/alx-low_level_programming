#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - searches for specific value in sorted arrays
 * @array: pointer to the first element in the array
 * @size: size of the array
 * @value: element to search for
 *
 * Return: -1 if array is null or value absent, else return value
 */

int binary_search(int *array, size_t size, int value)
{
	int  left, right, pivot;

	if (array == NULL)
		return (-1);
	left = 0;
	right = size - 1;
	while (left <= right)
	{
		print_array(array, left, right);
		pivot = (left + right) / 2;
		if (array[pivot] > value)
			right = pivot - 1;
		else if (array[pivot] < value)
			left = pivot + 1;
		else
			return (pivot);
	}
	return (-1);
}

/**
 * print_array - print array
 * @array: array
 * @left: starting print
 * @right: ending print
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");
	for (i = left; i < right; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[i]);
}
