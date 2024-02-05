#include "main.h"
#include <stdio.h>
/**
 * *leet - Encodes a string
 * @n: string
 *
 * Return: 0
 **/

char *leet(char *n)
{
	int b = 0;

	for (b = 0; n[b] != '\0'; b++)
	{
		while (n[b] == 'A' || n[b] == 'a')
			n[b] = '4';

		while (n[b] == 'E' || n[b] == 'e')
			n[b] = '3';

		while (n[b] == 'O' || n[b] == 'o')
			n[b] = '0';

		while (n[b] == 'T' || n[b] == 't')
			n[b] = '7';

		while (n[b] == 'L' || n[b] == 'l')
			n[b] = '1';
	}

return (0);
}
