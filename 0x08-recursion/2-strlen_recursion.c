#include "main.h"

/**
 * _strlen_recursion - return string length
 * @s: a pointer varable to hold the of a string and to be returned
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int length;

	if (*s == '\0')
		return (0);

	s++;

	length = 1 + _strlen_recursion(s);

	return (length);
}
