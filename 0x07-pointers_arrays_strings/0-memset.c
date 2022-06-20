#include "main.h"

/**
 * Returns a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int size = n;

	if (size > 0)
	{
		int k = 0;

		for(k; k < size; k++)
		{
			s[k]=b;
		}
	}

	return (s);
}
