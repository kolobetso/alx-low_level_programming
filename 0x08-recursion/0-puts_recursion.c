#include "main.h"

/**
 * _puts_recursion.c to print on a new line
 *  @s: dtring to put
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);

	++s;

	_puts_recursion(s);
}
