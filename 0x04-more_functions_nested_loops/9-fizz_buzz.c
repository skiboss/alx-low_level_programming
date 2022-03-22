#include "main.h"
#include <stdio.h>

/**
 * main - prints number 1 to 100
 * Print Fizz in place of numbers that are multiples of 3
 * Print Buzz in place of numbers that are multiples of 5
 * Print FizzBuzz in place of multiples of both 3 and 5
 * return: 0 (Success)
 */
int main(void)
{
	int i;

	char fizz[] = "Fizz";
	char buzz[] = "Buzz";
	char fizzbuzz[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if (i == 100)
		{
			printf("%s", buzz);
		}
		else if ((i % 5) == 0)
		{
			printf("%s ", buzz);
		}
		else if ((i % 3) == 0)
		{
			printf("%s ", fizz);
		}
		else if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s ", fizzbuzz);
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}
