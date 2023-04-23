#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - logs numbers
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 * Return: nothing
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pn;
	unsigned int t;

	va_start(pn, n);

	for (t = 0; t < n; t++)
	{
		printf("%d", va_arg(pn, int));
		if (separator && t < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(pn);
}
