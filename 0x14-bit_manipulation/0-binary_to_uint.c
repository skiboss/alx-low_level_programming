#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - function to convert binary to unsigned integer.
 * @b:binary string
 *
 * Return: unsigned integer
 */

unsigned int binary_to_uint(const char *b)
{
        unsigned int val = 0;
        int s = 0;

        if (b == NULL || b == 0)
        {
                return (0);
        }

        while (b[s] != '\0')

