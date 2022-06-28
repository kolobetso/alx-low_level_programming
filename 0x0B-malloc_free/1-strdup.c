#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory.
 */

char *_strdup(char *str)
{
	char *double_str;
	int i = 0;
	int length = 0;

	if (str == NULL)
		return (NULL);

	while (*(str + i))
		i++,length++;

	length++;

	double_str = malloc(sizeof(char) * length);

	if (double_str == NULL)
		return (NULL);

	for(i = 0; i < length; i++)
	{
		*(double_dtr + i) = *(str + i);
	}

	return (double_str);
}
