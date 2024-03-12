#include "main.h"
/**
 * print_binary - Prints binary representaion of #
 * @n: Number
 *
 * Return: 0
 **/

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int i = 0;
	int k;

	if (n == 0)
	{
		_putchar('0');
			return;
	}

	mask = (mask << 63);

	for (k = 63; k >= 0; k--)
	{
		if (mask & n)
		{

			_putchar('1');
			i = 1;
		}
		else
		{
			if (i)
				_putchar('0');
		}

		mask >>= 1;
	}
}
