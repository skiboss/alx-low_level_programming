#include "main.h"

/**
 * char *_strcpy - a function that copies string pointed to by pointer src
 * @dest: copy to
 * @src: what we're copying from
 * Return: string
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	for (; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
