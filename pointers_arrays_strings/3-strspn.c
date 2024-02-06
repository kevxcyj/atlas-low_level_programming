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
	unsigned int c = 0;
	int a;
	int b;
	int d;

	b = 0;
	while (s[b] != '\0')
	{
		a = 0;
		for (d = 0; accept[d] != '\0'; d++)
		{
	if (s[a] == accept[d])
	a = 0;
		}
	d = 0;
	if (a == 0)
		break;

	c++;
	a++;
	}
return (a);

}

	
