#include "main.h"

/**
 * _memset - A function that fills a memory with constant byte
 * @s: address to destination
 * @b: constant byte
 * @n: bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
