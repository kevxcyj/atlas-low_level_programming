#include <stdio.h>
#include "main.h"
/**
 * print most numbers - Prints the numbers followed by a new line
 *
 * Return: 0
 **/

void print_most_numbers(void)
{
	int i = 0;

	for (; i <= 9; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
			else
		{
			putchar(i + '0');
		}
	}
putchar('\n');
}	
