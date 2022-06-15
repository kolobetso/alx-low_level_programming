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
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')/*i is index of null terminator*/
		i++;

	while (src[j] != '\0')/*append replacing null terminator*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	
	return (dest);
}
