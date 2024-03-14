#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function parameter on each element of array
 * @array: Array to itirate
 * @size: Size of array
 * @action: Pointer of function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
