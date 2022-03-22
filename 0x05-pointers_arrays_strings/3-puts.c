#include "main.h"

/**
 * _puts - a function to print a string
 * @str: string to print
 * Return: string
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		printf(str[i]);
	}
	printf('\n');
}
