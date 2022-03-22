#include "main.h"

/**
 * rev_string - reverse a string as the name implies
 * @s: string to be reversed
 * Return: reversed string
 */
void rev_string(char *s)
{
	int i, count;

	count = 0;
	char rev = s[0];

	while (s[count] != '\n')
	{
		count++;
	}

	for (i = 0; i < count; i++)
	{
		count--;
		rev = s[i];
		s[i] = s[count];
		s[count] = rev;
	}
}
