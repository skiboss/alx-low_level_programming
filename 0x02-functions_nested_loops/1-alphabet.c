#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet();
	return (0);
}

void print_alphabet(void)
{
	for (i='a'; i<='z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (1);
}
