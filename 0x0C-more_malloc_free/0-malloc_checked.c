#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - allocate memory using malloc function
 * @b: size to malloc
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	prt = malloc(b);

	if (ptr == NULL)
		exit (98);

	return (ptr);
}
