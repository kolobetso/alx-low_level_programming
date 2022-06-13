#include "main.h"

/**
 * _putchar - puts character to standard output
 * @c: character to put to standard output
 */

void _puts(char *str)
{
	while (*str != '\0')
		_putchar(*str++);

	_putchar('\n');
}
