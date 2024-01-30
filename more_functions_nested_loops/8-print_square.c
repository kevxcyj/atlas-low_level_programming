#include "main.h"
#include <stdio.h>
/**
*print_square - Prints a square
*@size: parameter
*
* Return 0
**/

void print_square(int size)
{
	int size1, size2;

	if (size > 0)
	{
		for (size1 = 0; size1 < size; size1++)
{
		for (size2 = 0; size2 < (size - size1); size2++)
putchar('#');

putchar('#');
putchar('\n');
		}
	}
else
{
putchar('\n');
}
}
