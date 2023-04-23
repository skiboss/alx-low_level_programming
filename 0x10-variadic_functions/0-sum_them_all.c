#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sums the numbers
 * @n: first argument
 * Return: sum or 0 if fails
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int t;
	int sum;

	va_start(ap, n);

	if (n == 0)
		return (0);

	sum = 0;
	for (t = 0; t < n; t++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
