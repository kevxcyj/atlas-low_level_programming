#include"main.h"
/**
 * set_bit - Sets the value of a bit to 1
 * @n: Number
 * @index: Index
 *
 * Return: 1 or -1
 **/

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int b;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);

	b = 1 << index;
	*n = *n | b;

return (1);
}
