#include "main.h"

/**
 * print_square - function to print square
 * @size: size of the square(length or width)
 * Return: square
 */
void print_square(int size)
{
	int height, width;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (height = 1; height <= size; height++)
		{
			_putchar('#');
			for (width = 2; width <= size; width++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
