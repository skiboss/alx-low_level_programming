#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longType;
	long long int longLongType;
	char charType;

	/* sizeof evaluates the size of the variable*/
	printf("Size of a char: %lu byte(s)\n",
			(unsigned long)sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(intType));
	printf("Size of a long int: %lu byte(s)\n",
			(unsigned long)sizeof(longType));
	printf("Size of a long long int: %lu byte(s)\n",
			(unsigned long)sizeof(longLongType));
	printf("Size of a float: %lu byte(s)\n",
			(unsigned long)sizeof(floatType));
	return(0);
}

