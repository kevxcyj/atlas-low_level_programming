#include "main.h"
#include <stdio.h>
/**
 *string_toupper - Change all lowercase letters to uppercase
 *@n: parameter
 *
 * Return: 0
 **/

char *string_toupper(char *n)
{
	int b = 0;

	while (n[b++])
	{
		if (n[b] >= 'a' && n[b] <= 'z')
			n[b] -= 32;
	}

return (0);
}
