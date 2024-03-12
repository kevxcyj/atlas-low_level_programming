#include "main.h"
/**
 * flip_bits - Returns # of bits to flip
 * @n: Number
 * @m: Number
 *
 * Return: # of bits
 **/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int b = 0;
	unsigned long int c;
	unsigned long int d = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		c = d >> i;

		if(c & 1)
			b++;
	}

return (b);
}
