#include "main.h"

/**
 *_putchar - puts character to standard output
 *@c: character to put to standard output
 *reutn 0
 */

void _puts(char *s)
{	
	int i =0;

	while (s[i])
	{
		_putchar(s[i]);
		i++;
	}

	_putchar('\n');
}
