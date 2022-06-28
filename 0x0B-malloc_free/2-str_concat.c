#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;

	int i = 0, j = 0, len = 0, len2 = 0;

	if(s1 == NULL)
		s1= "";

	if(s2 == NULL)
		s2= "";

	while(*(s1 + i))
		len++ , i++;
	
	while(*(s2 + j))
		len2++ , j++;

	len2++;

	concat = malloc(sizeof(char) * (len + len2)); /*alloc memory*/
	
	if (concat == NULL) /* validate memory */
		return (NULL);

	i = 0, j = 0;

	for(i = 0; i < len; i++)
	{
		*(concat + i) = *(s1 + i);
	}

	for(j = 0; j < len2; j++)
	{
		*(concat + i) = *(s2 + j);
			i++;
	}

	return (concat);
}
