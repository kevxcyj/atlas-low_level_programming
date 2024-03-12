#include "main.h"
/**
 * clear_bit - Function that stes the value to 0
 * @n: Parameter
 * @index: Index
 *
 * Return: 1 or -1
 **/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);

	*n &= ~(1 << index);

return (1);
}
