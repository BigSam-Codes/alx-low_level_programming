#include "main.h"

/**
 * _pow_recursion - returning the value of x, raised to power y
 * @x: the value to be returned
 * @y: the power of x
 *
 * Return: Integer value
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	return (x * _pow_recursion(x, y - 1));
}
