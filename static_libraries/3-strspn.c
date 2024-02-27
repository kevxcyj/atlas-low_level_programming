#include "main.h"
/**
 * _strspn - Gets the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 *
 * Return: 0
 **/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int c;
	int a;
	int b;
	int d;

	a = 0;
	while (s[a] != '\0')
	{
		d = 0;
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				d = 0;
		}
	b = 0;
	if (d == 0)
		break;
	c++;
	a++;
	}
	return (a);
}	


	
