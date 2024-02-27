#include "main.h"
#include "string.h"
/**
 * _memcpy - Copies memory area
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 *
 * Return: 0
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];

return (dest);


}
