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
		putchar(n);
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			while (i != 98)
			{
				putchar(i);
				putchar(',');
				putchar(' ');
				i++;
			}
			putchar(i);
		}
	}
	else 
	{
		int i;

		for (i = n; i >= 98; i--)
		{
			while (i != 98)
			{
				putchar(i);
				putchar(',');
				putchar(' ');
				i--;
			}
			putchar(i);
		}
	}
	putchar('\n');
}
