#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _isupper - function to check for uppercase
 * @c: argument
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
