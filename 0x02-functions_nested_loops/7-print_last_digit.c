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
	int ld, result;

	ld = (c % 10);
	result = abs(ld);
	return (result);
}
