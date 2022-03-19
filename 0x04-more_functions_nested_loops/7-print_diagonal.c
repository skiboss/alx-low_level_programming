#include "main.h"

/**
 * print_diagonal - prints the backslash diagonally
 * @n: number of times to print the disgonals
 * Return: expected diagonal result
 */
void print_diagonal(int n)
{
	int ln, space;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (ln = 1; ln <= n; ln++)
		{
			for (space = 1; space < ln; space++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
