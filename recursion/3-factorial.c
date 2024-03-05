#include "main.h"

/**
 * factorial - Returns factorial of given number
 *
 * @n: Number to be factored
 *
 * Return: factorial of given number
 *
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
