#include "main.h"

/**
 * cap_string - function to capitalize words
 * @n: input string
 * Return: Uppercase on first letter of word
 */
char *cap_string(char *n)
{
	int i, s;
	int upper;
	int separators[] = {',', '.', ';', '?'.'"', '{','}','(', ')',
	       	' ', '\n', '\t'}

	upper = 32;

	for (i = 0; n[i] != '\0'; i++)
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] = n[i] - upper;
		}

		upper = 0;

		for (s = 0; s <= 12; s++)
		{
			if (n[i] == separators[s])
			{
				x = 12;
				cap = 32;
			}
		}
	}
	return (n);
}
