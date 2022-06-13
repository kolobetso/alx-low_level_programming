#include "main.h"

/**
 *_putchar - puts character to standard output
 * @c: character to put to standard output
 */

void _puts(char *s)
{	
	int i =0;

	while (s[0])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
