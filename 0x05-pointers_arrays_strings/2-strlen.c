#include "main.h"

/**
 * _strlen - a function to return the length of string
 * @s: argument
 * Return: Length of string
 */
int _strlen(char *s)
{
	int i, length;
	char word;

	i = 1;
	length = 0;
	word = s[0];

	while (word != '\0')
	{
		length++;
		word = s[i++];
	}
	return (length);
}
	
