#include "main.h"

void puts_half(char *str)
{
	int k, b;
	char m;

	for (k = 0; str[k] != 0; k++)
	{}
if (k % 2 == 0)
{
	for ((b = k / 2); str[b] != 0; b++)
	{

		m = str[b];
		_putchar(m);
	}
}
else
{
	for ((b = (k - 1) / 2); str[b] != 0; b++)
	{
		m = str[b];
		_putchar(m);
	}
}
_putchar('\n');
}
