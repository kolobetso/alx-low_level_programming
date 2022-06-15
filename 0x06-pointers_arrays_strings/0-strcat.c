#include "main.h"

/**
* _strncat - concatenate n bytes to destination string.
* @dest: string to be appended to
* @src: string to append
* @n: append n number of bytes(chars)
* Return: concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int length, j; /* j will hold the length of the source */

	length = 0;

	while (dest[length] != '\0')
	{
		length++;
	
	}
	for (j = 0; src[j] != '\0'; j++, length++)
	{
		dest[length] = src[j];
	}
	dest[length] = '\0';
	return (dest);
}
