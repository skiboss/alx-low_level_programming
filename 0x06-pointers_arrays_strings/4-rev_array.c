#include "main.h"

/**
 * reverse_array - function to reverse an array's content
 * @a: arrays content
 * @n: elements
 * Return: Always 0
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n; i++)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
	}
}
