#include "main.h"
/**
 * malloc_checked - Allocates memory using malloc
 * @b: parameter
 *
 * Return: pointer to allocated memory
 **/

void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);
	else

return (pointer);
}
