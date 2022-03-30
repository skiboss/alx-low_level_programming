#include "main.h"

/**
 * _strspn - Entry
 * @s: input
 * @accept: input
 * Return: value
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, n, value, result;

	value = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		result = 0;

		for (n = 0; accept[n] != '\0'; n++)
		{
			if (accept[n] == s[i])
			{
				value++;
				result = 1;
			}
		}

		if (result == 0)
		{
			return (value);
		}
	}
	return (value);
}
