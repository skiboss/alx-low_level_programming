#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_alphabet_x10 - This prints the alphabet in lowercase 10 times
 * in new lines
 *
 * Return: 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i = 10;

	while (i < 10)
	{
		int num;

		for (num = 'a'; num <= 'z'; num++)
		{
			putchar(num);
		}
		putchar('\n');
	}
}

