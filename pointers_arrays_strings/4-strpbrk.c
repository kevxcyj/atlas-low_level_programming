#include "main.h"


/**
 * _strpbrk - locates first occur of char from bytes in accept
 * @s: string
 * @accept: bytes
 *
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept, or NULL if no such byte is found
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

