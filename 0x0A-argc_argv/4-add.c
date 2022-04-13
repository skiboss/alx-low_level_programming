#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to add arguments
 * @argc: argument count
 * @argv: argument array
 * Return: (0) Success
 */
int main(int argc, char *argv[])
{
	int i, sum;

	i = 0, sum = 0;
	if (argc < 1)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!atoi(argv[i]))
		{
			printf("%s\n", "Error");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);

	return (0);
}
