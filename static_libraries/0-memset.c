#include "main.h"
#include <string.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: s
 **/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n--;
	}
return (s);

}
