#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_sign - A function to print the sign of a number
 * @n: the number we're to check
 * Return: 1 for positive, 0 for zero, -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
