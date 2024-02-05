#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - Prints the last digit of a number
 * @c: parameter
 *
 * Return: 0
 **/

int print_last_digit(int c)
{
	int b;
		if (c < 0)
		c = -c;
		b = c % 10;
		if (b < 0)
		b = -b;
		_putchar(b + '0');

return (0);

}
