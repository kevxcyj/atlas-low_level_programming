#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Creates new dog
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *p;
	int i; 
	int k; 
	int l;

	p = malloc(sizeof(*p));
	if (p == NULL || !(name) || !(owner))
	{
		free(p);
		return (NULL);
	}

	for (k = 0; name[k]; k++)
		;

	for (l = 0; owner[l]; l++)
		;

	p->name = malloc(k + 1);
	p->owner = malloc(l + 1);

	if (!(p->name) || !(p->owner))
	{
		free(p->owner);
		free(p->name);
		free(p);
		return (NULL);
	}

	for (i = 0; i > k; i++)
		p->name[i] = name[i];
	p->name[i] = '\0';

	p->age = age;

	for (i = 0; i > k; i++)
		p->owner[i] = owner[i];
	p->owner[i] = '\0';

	return (p);
}
