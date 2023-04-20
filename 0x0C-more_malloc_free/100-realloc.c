#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block with malloc and free
 * @ptr: a pointer to the memory previously allocated by malloc
 * @old_size: the size of the allocated space
 * @new_size: the new size of the new block in bytes
 * Return: a pointer to the memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s, *pre = ptr;
	unsigned int t, size = new_size;

	if (ptr == NULL)
	{
		s = malloc(new_size);
		if (s == NULL)
			return (NULL);
		else
			return (s);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
		return (ptr);

	s = malloc(new_size * sizeof(*pre));
	if (s == NULL)
		return (NULL);
	if (new_size > old_size)
		size = old_size;

	for (t = 0; t < size; t++)
	{
		s[t] = pre[t];
	}
	free(ptr);

	return (s);
}
