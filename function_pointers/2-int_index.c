#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - Searches for an integer
 * @array: Array
 * @size: Size
 * @cmp: parameter
 **/

int int_index(int *array, int size, int (*cmp)(int))
{
	int n;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	for (n = 0; n < size; n++)
	{
		if (cmp(array[n]) == 1)
			return (n);
	}
return (-1);
}
