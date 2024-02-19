#include "main.h"
/**
 * _calloc - Allocates memory for an array
 * @nmemb: parameter
 * @size: parameter
 *
 * Return: Pointer to allocated memory
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

pointer = calloc(nmemb, size);

	if (pointer == NULL)
		return (NULL);
	else
		return (pointer);
}
