#include "main.h"
#include <stdlib.h>

/**
 * array_range - function for array of integers
 * @min: stating point 
 * @max: ending point
 * Return: return pointer to an array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int i;
	int n = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * n);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		ptr[i] = min++;

	return (ptr);
}
