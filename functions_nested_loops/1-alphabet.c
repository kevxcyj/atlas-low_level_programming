#include "main.h"
#include <stdio.h>

/**
 * Print_alphabet - Prints the alphabet in lowercase
 *
 * Return: 0
 **/

void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
_putchar('\n');
}
