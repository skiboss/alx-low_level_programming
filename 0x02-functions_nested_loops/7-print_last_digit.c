#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_last_digit - prints the absolute value of the last digit
 * @c: value passed as input
 * Return: return the last digit
 */
int print_last_digit(int c)
{
	int ld;

	ld = (c % 10);

	if (ld < 0)
	{
		ld = (-1 * ld);
	}

	_putchar(ld +'0');
	return (ld);
}
