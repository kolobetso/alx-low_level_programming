#include "main.h"

/**
 * _pow_recursion - Function to return the value of x raised to the power of y
 * @x: the value of x
 * @y: the value to power to x
 * eturn: power of a number, -1 if power less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (x == 0)
		return (0);

	if (x == 1 || y == 0 )
		return (1);
	
	return (x * _pow_recursion(x, y - 1));

}
