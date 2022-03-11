#include <stdio.h>

/**
 * Main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType; // integer type
	float floatType; // float type
	long int longType; // long type
	long long int longLongType //longLongtype
	char charType; // character type

	// sizeof evaluates the size of the variable
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("Size of a long int: %lu bytes(s)\n", sizeof(longType));
	printf("Size of a long long int: %lu bytes(s)\n", sizeof(longLongType));
	printf("Size of a float: %lu byte(s)\n", sizeof(floatType));

	return(0);
}

