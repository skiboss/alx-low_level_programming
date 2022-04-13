#include <stdio.h>
#include <stdlib.h>

/**
 * main - Program to return count of arguments
 * @argc: argument count in main
 * @argv: argument vector in program main
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	(void)argv;
	printf("%i\n", argc - 1);
	return (0);
}
