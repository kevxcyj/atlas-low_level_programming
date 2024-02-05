#include "main.h"
#include <stdio.h>
/**
 * _strncpy - Copies a string
 * @dest: string
 * @src: string
 * @n: parameter
 *
 * Return: 0
 **/

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	for (a = 0; a < n && src[a] != '\0'; a++)
		dest[a] = src[a];
	for (; n > a; a++)
		dest[a] = '\0';

return (dest);

}
