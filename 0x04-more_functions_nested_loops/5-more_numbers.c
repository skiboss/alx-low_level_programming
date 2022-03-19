#include "main.h"
#include <stdio.h>

/**
 * more_numbers - prints the number 0 - 14, 10 times
 *
 * Return: 0 Success
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=14; j++)
		{
			if (i >= 10)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
