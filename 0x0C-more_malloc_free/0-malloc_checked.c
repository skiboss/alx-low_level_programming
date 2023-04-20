#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function that allocate memory
 * @b: memory size
 * Return: 98 when failed or point to memory
 */
void *malloc_checked(unsigned int b)
{
	void *mem;
	
	mem = malloc(b);

	if (mem == NULL || b < 1)
		exit(98);

	return (mem);
}
