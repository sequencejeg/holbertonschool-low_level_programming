#include "main.h"

/**
 * _pow_recursion - Returns value of x to the power of y
 *
 * @x: Value of Power
 *
 * @y: Power that x will be raised to
 *
 * Return: Returns the value of x raised to the power of y
 *
 */

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}

	else if (y < 0)
	{
		return (0);
	}

	return (x * _pow_recursion(x, y - 1));
}

