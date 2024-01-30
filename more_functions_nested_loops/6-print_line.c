#include "main.h"
#include <stdio.h>

/**
 * print_line - Draws a straight line
 * @n: parameter
 *
 * Return: 0
 **/

void print_line(int n)
{
	while (n-- > 0)
	{
	_putchar('_');
	}
putchar('\n');
}
