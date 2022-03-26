#include "main.h"

/**
 * leet - function to replace characters
 * @n: string
 * Return: code
 */
char *leet(char *n)
{
	int i, s;
	int search[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int replace[] = {'4', '3', '0', '7', '1'};

	for (i = 0; n[i] != '\0'; i++)
	{
		for (s = 0; s <= 9; s++)
		{
			if (n[i] == search[s])
			{
				n[i] = replace[s / 2];
				s = 9;
			}
		}
	}
	return (n);
}
