#include "main.h"

/**
 * puts2 - a function that prints every other character of a string
 * starting with the firsr character, ffl by a new line.
 * @str: string argument
 * return: result
 */
void puts2(char *str)
{
	int i;

	i = 0;
	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
		{
			_putchar(str[i]);
		}
		else
		{
			continue;
		}
	}
	_putchar('\n');
}
