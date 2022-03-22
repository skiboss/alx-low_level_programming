#include <stdio.h>
#include "main.h"

/**
 * print_array - a funtion to print an array's values
 * @a: array
 * @n: number of array element
 * return: array values separated by comma
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", a[i]);
		if (i == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	}
	printf("\n");
}
