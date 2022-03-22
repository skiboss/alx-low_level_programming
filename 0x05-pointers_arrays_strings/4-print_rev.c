#include "main.h"

/**
 * print_rev - function to print reverse of a string input
 * @s: argument input
 * Return: reverse
 */
void print_rev(char *s)
{
	int i, count, rev;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}

	for (rev = (count - 1); rev >= 0; rev--)
	{
		_putchar(s[rev]);
	}
	_putchar('\n');
}
