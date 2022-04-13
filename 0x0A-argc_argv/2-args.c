#include <stdio.h>
#include <stdlib.h>

/**
 * main - program to print all arguments received by main
 * @argc: Number of argument received
 * @argv: Arguments received
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
