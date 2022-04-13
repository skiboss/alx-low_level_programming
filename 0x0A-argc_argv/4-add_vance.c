#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * _isnumber - Function to check if argument is an integer
 * @s: argument
 * Return: 1 if integer and 0 if not
 */
int _isnumber(char *s)
{
	int i, check, d;

	i = 0, d = 0, check = 1;
	if (*s == '-')
	{
		i++;
	}
	for (; *(s + i) != 0; i++)
	{
		d = isdigit(*(s + i));
		if (d == 0)
		{
			check = 0;
			break;
		}
	}
	return (check);
}
/**
 * main - program to add integer arguments
 * @argc: argument count
 * @argv: argument vector
 * Return: (0) Success
 */
int main(int argc, char **argv)
{
	int i, n, ex;

	ex = 0, n = 0;
	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (_isnumber(argv[i]))
			{
				n += atoi(argv[i]);
			}
			else
			{
				ex = 1;
			}
		}
	}
	if (ex == 0)
	{
		printf("%i\n", n);
	}
	else
	{
		printf("%s\n", "Error");
	}
	return (ex);
}
