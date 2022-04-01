#include "main.h"

/**
 * palin - gets the length
 * @a: string input
 * @l: integer
 * Return: 1
 */
int palin(char *s, int l)
{
	if (*a == 0)
		return (l - 1);
	return (palin(a + 1, l + 1));
}
/**
 * palind - comparation
 * @a: string input
 * @l: length
 * Return: 1
 */
int palind(char *a, int l)
{
	if (*a != *(a + l))
		return (0);
	else if (*a == 0)
		return (1);
	return (palind(a + 1, l - 2));
}
/**
 * is_palindrome - checks if a string is palindrome
 * @s: string to check
 * Return: 1
 */
int is_palindrome(char *s)
{
	int n;

	n = palin(s, 0);
	return (palind(s, l));
}
