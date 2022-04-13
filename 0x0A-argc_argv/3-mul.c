#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to multiply two numbers
 * @argc: Number of arguments supplied
 * @argv: Pointer to supplied arguments
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	int error, product;

	if (argc != 3)
	{
		printf("%s\n", "Error");
		ex = 1;
	}
	else
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", n);
	}
	return (ex);
}
