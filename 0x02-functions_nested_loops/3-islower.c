#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _islower - This checks the alphabet if it is lowercase
 *
 * @c: the argument we are to check
 * Return: 1 if it's lowercase, 0 otherwise
 */
int _islower(int c)
{
		if (c >= 'a' && c <= 'z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
}
