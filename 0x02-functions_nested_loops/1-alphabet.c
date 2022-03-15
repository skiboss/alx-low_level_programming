#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * print_alphabet - function to print the alphabet in lower case
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
