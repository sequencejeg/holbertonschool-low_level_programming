#include "main.h"
#include <stdio.h>

/*
 *
 * factorial - Returns factorial of given number
 *
 * @n: Value of factorial
 *
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return 1;
	}

	else
	{
		return n * factorial(n - 1);
	}
}
