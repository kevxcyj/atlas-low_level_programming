#include "main.h"
#include <stdlib.h>
/**
 * strpbrk - Searches a string for any of a set of a bytes
 * @s: parameter
 * @accept: parameter
 *
 * Return: 0
 **/

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s)

	{
		for (a = 0; accept[a]; a++)
		{
		if (*s == accept[a])
			{
			return (s);
			}
		}
		s++;
	}
return (0);
}
