#include "main.h"

/**
 * _strlen_recursion - a function that return a length of a string
 * @s: a pointer varable to hold the of a string and to be returned
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
