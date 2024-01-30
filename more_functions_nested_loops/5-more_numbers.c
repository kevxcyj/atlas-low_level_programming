#include "main.h"
#include <stdio.h>

/**
 * more_numbers - Prints the numbers 10x times
 *
 * Return: 0
 **/

void more_numebrs(void)
{
	int l, n;

	for (l = 0; l < 10; l++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('0' + n /10);
			}
			_putchar('0' + n % 10);
		}
		_putchar('\n');
	}
}	
