#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_dog - Frees dogs
 * @d: Structure of dog
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
