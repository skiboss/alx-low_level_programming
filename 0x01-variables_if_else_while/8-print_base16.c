#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
 
int main(void)
{
	int hex;
	char i;

	for (hex = '0'; hex <= '9'; hex++)
	{
		putchar(hex);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
		putchar('\n');
	}
	return (0);
}
