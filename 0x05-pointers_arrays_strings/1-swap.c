#include "main.h"

/**
 * swap_int - this swaps the values of the pointers
 * @a: first input
 * @b: second input
 * Return: exchange
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
