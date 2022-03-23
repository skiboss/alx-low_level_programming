#include "main.h"

/**
 * print_triangle - a function that prints triangles
 * @size: size of the triangles
 * Return: triangle of '#'s
 */
void print_triangle(int size)
{
	int space, row, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (row = 0; row <= (size - 1); row++)
		{
			for (space = 0; space < (size - 1) - row; space++)
			{
				_putchar(' ');
			}
			for (n = 0; n <= row; n++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
