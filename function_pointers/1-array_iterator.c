#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - 
 * @size: size of the array
 * @action: pointer to function
 * @array: array to iterate
 * 
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
    unsigned int counter;

    if (!array || !action){
        return;
    }

    for (counter = 0; counter < size; counter++){
        action(array[counter]);
    }
}
