#include "main.h"

/**
 * swap_int - takes 2 pointer data types and switches their value
 *
 *
 * @a: pointer 1
 *
 * @b: pointer 2
 */

void swap_int(int *a, int*b)

{

	int var_a = *a;

	*a = *b;

	*b = var_a;

}