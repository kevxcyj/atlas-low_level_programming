#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: string
 * @src: string
 * Return: 0
 **/

char *_strcat(char *dest, char *src)
{
	int a, c;

	while (dest[a] != '\0')
		a++;
	
	for (a = 0; src[a]; a++)
		dest[c++] = src[a];

return (dest);
}
