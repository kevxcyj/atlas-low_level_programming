#include "main.h"
#include <stdlib.h>
/**
 * create_array - Creates an array of chars and initializes it with a specific char
 * @size: parameter
 * @c: character
 *
 * Return: NULL
 **/

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int b;

	if (size == 0)
		return (NULL);

	k = malloc(sizeof(char) * size);

	if (k == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		k[b] = c;
return(k);
}
