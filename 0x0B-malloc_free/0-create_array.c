#include "main.h"
#include <stdlib.h>

/**
 * *create_array - this creates an array of characters initialized with a specific char
 * @size: size of the array
 * *@c: char to be initialized
 * Return: pointer to the array or NULL otherwise
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	if (size == 0)
		return (NULL);

	str = malloc(size * sizeof(char));

	if (str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;

	return (str);
}
