#include "main.h"
#include <stdio.h>

void print_diagonal(int n)
{
	int k;
	int c;

if (n > 0)
{
	for (k = 0; k < n; k++)
	{
for (c  = 0; c < k; c++)
	putchar(' ');

putchar('\\');

if (k == (n - 1))
	continue;
putchar('\n');
	}
}
putchar('\n');
}
