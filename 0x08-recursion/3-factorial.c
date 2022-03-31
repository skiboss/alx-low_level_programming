#include "main.h"

/**
 * factorial - recursive function to derive the factorial of a number
 * @n: number of which factorial is to be calculated
 * Return: factorial
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
