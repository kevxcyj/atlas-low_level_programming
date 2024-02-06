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
	int c;
	int d;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (c = 0; n[c] != '\0'; c++)
	{
		for (d = 0; d < 10; d++)
		{
			if (n[c] == a[d])
			{
				n[c] = b[d];
			}
		}
	}

return (n);
}
