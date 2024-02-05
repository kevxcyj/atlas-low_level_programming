#include "main.h"
#include <string.h>
/**
 * _memset - Fills memory with a constant byte
 * @s: parameter
 * @b: parameter
 *
 * Return: 0
 **/

char *_memset(char *s, char b, unsigned int n)
{
	while (n)
	{
		s[n - 1] = b;
		n --;
	}
return (s);

}
