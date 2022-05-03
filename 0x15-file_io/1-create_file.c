#include "main.h"

/**
 * create_file - creates file
 * @filename: name of file
 * @text_content: content to be written to file
 *
 * Return: (1) Success else -1
 */

int create_file(const char *filename, char *text_content)
{
	int open_file, write_file, length;

	if (filename == NULL)
		return (-1);

	length = 0;
	if (text_content != NULL)
	{
		while (text_content[length])
			length++;
	}

	open_file = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	write_file = write(open_file, text_content, length);

	if (open_file == -1 || write_file != length)
		return(-1);

	close(open_file);
	return (1);
}
