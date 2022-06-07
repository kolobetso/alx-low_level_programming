#include "main.h"

/**
 *  print_last_digit - print last digit of integer
 *  @n: integer argument
 *  Return: last digit of number
 */

int print_last_digit(int r)
{
	if (r < 0)
		r*= -1;
	_putchar('0' + (r % 10));

	return (r % 10);
}
