#include "main.h"
#include <string.h>
/**
 * _strchr - Locates a character in a string
 * @s: parameter
 * @c: parameter
 *
 * Return: 0
 **/

char *_strchr(char *s, char c)
{
	int a = 0;

	for (a = 0; (s[a] != c) && (s[a] != '\0'); a++)
		;
	if (s[a] == c)
		return (s + a);
	else

		return (0);
}
