#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - Entry
 * @a: input
 * @size: input
 * Return: NULL
 */
void print_diagsums(int *a, int size)
{
	int i, n, first, second;

	first = 0;
	second = 0;
	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		first = first + a[i];
	}
	for (n = size - 1; n <= (size * size) - size; n = n + size - 1)
	{
		second = second + a[n];
	}
	printf("%d, %d\n", first, second);
}
