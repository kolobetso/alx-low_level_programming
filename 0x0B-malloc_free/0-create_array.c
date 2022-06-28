#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array of characters and initialize it with a signle char
 * @size: size of an array
 * @c: put character values in array
 * Return: pointer to an array
 */

char *create_array(unsigned int size, char c)
{
	char * arr;
	int i = 0;

	if (size <= 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if(arr == NULL)
		return (NULL);

	for(i=0 ; i < (int)size ; i++)
	{
		*(arr + i) = c;
	}

	*(arr + i) = '\0';

	return (arr);
}
