#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_to_98 - prints the integer n up to 98 or down to 98
 *
 * @n: the argument passed
 *
 * Return: 0 (Success)
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d", n);
	}
	else if (n < 98)
	{
		while (n <= 98)
		{
			printf("%d", n);
			if (n != 98)
			{
				printf(", ");
			}
			n++;
		}
	}
	else 
	{
		while (n >= 98)
			{
				printf("%d", n);
			}
			n--;
	}
	putchar('\n');
}
