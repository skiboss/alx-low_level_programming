#include "main.h"

/**
 * read_textfile - reads and prints a text file using POSIX
 * @filename: pointer to file
 * @letters: no of letters it could read
 *
 * Return: output
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o_f, r_f, w_f;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(letters * sizeof(char));
	if (buff == NULL)
		return (0);

	o_f = open(filename, O_RDONLY);
	r_f = read(o_f, buff, letters);
	w_f = write(STDOUT_FILENO, buff, r_f);

	if (o_f == -1 || r_f == -1 || w_f == -1 || r_d != w_f)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(o_f);

	return (w_f);
}
