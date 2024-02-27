#include "main.h"
/**
 *_strncat - Concatenates two strings
 *@dest: string
 *@src: string
 *@n: parameter
 *
 *Return: 0
 **/

char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a++])
		b++;

	for (a = 0; src[a] && a < n; a++)
		dest[b++] = src[a];

return (dest);
}
