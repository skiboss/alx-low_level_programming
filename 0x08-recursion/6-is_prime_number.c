#include "main.h"

/**
 * prime - function to iterate numbers
 * @a: integer n
 * @b: iteration
 * Return: 1
 */
int prime(int a, int b)
{
	if (a == b)
		return (1);
	else if (a % b == 0)
		return (0);
	return (prime(a, b + 1));
}
/**
 * is_prime_number - checks for prime number
 * @n: number input
 * Return: 1
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
