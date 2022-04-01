#include "main.h"

/**
 * squareroot - iterates from 1 to n
 * @a: n
 * @b: iteration
 * Return: 1
 */
int squareroot(int a, int b)
{
	if (b * b == a)
		return (b);
	if (b * b > a)
		return (-1);
	return (squareroot(a, b + 1));
}
/**
 * _sqrt_recursion - return the square root of input
 * @n: number input
 * Return: squareroot
 */
int _sqrt_recursion(int n)
{
	return (squareroot(n, 1));
}
