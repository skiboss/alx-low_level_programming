#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - Prints all integers from 0 to 9 asides 2 and 4
 * Return: expected output 01356789
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if((i == 2) || (i == 4))
		{
			continue;
		}
		else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
