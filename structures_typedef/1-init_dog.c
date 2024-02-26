#include "dog.h"
#include <stdio.h>
/**
 * init_dog - Initializes a variable of type 
 * @d: pointer
 * @name: parameter
 * @age: parameter
 * @owner: parameter
 **/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
