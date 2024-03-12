#include "main.h"
/**
 * get_bit - Returns the value of a bit 
 * @n: Number
 * @index: Index
 *
 * Return: Value of bit or -1
 **/

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int divisor, div;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	divisor = 1 << index;
	div = n & divisor;

	if (div == divisor)
		return (1);

return (0);
}
