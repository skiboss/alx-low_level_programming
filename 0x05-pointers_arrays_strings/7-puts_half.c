#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: string input
 * return: half string
 */
void puts_half(char *str)
{
	int i, n, count;

	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		count++;
	}
	n = (count / 2);

	if ((count % 2) == 1)
	{
		n = ((count + 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
