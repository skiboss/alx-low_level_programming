#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints all integers from 0 to 9 asides 2 and 4
 * Return: expected output 01356789
 */
void print_most_numbers(void)
{
	int i;

	i = 0;

	while (i < 10)
	{
		if ((i != 2) && (i != 4))
		{
			_putchar('%d', i)
		}
		i++;
	}
	_putchar('\n');
}
