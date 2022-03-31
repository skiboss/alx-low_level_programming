#include "main.h"

/**
 * _print_rev_recursion - recursive function to print reverse of a string
 * @s: string input
 * Return: String reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
