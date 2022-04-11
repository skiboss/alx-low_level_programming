#include "main.h"
/**
 * _isalpha - a function that checks if an argument is an alphabet or not
 *
 * @c: this is our argument
 *
 * Return: 1 if c is alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
