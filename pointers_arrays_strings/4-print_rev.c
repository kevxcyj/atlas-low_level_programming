#include "main.h"
/**
 * print_rev - Prints string in reverse
 * @s : String
 *
 * Return: 0
 **/

void print_rev(char *s)
{
	int c;

	for (c = 0; s[c] != 0; c++)
	{ }
	for (c = c - 1; c >= 0; c--)
		putchar(s[c]);
putchar('\n');
}

