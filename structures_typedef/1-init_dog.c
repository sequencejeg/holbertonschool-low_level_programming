#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
* init_dog - Initializes variables
* @d: Pointer to structure
* @name: Name
* @age: Age
* @owner: Owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
