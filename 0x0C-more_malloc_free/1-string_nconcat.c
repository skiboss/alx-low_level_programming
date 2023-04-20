#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates strings
 * @s1: string to copy to
 * @s2: string to copy from
 * @n: bytes to copy number
 * Return: NULL if failed or pointer to new string
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, size1, size2;
	char *loc;

	if (s1 == NULL)
		size1 = 0;
	else
	{
		for (size1 = 0; s1[size1]; ++size1)
			;
	}

	if (s2 == NULL)
		size2 = 0;
	else
	{
		for (size2 = 0; s2[size2]; ++size2)
			;
	}

	if (size2 > n)
		size2 = n;

	loc = malloc((size1 + size2 + 1) * sizeof(char));
	if (loc == NULL)
		return (NULL);

	for (i = 0; i < size1; i++)
		loc[i] = s1[i];

	for (i = 0; i < size2; i++)
		loc[size1 + i] = s2[i];

	loc[size1 + size2] = '\0';

	return (loc);
}
