#include "main.h"
/**
 * puts2 - Prints every other character
 * @str: String
 *
 * Return: 0
 **/


void puts2(char *str)
{
	int c;
	char l;

	for (c = 0; str[c] != 0; c++)
	{
		if (c % 2 == 0)
		{
			l = str[c];
			putchar(l);
		}
	}
putchar('\n');
}
