#include "main.h"
/**
 * _puts_recursion - Prints a string followed by a new line
 * @s: Parameter
 *
 * Return: 0
 **/

void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*s);
		_puts_recursion(s++);
	}
	else
		putchar('\n');
}
