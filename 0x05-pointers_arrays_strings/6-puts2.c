#include "main.h"

/**
 * puts2 - prints every second character of a string, followed by a new line
 * @str: string to print
 */

void puts2(char *s)
{
	int i;

	while (s[i])
	{
	
		if (i % 2 == 0)
		_putchar(s[i]);
		i++;
	}
	
	_putchar('\n');
}
