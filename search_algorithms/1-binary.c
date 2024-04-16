#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array
 * @array: Array
 * @size: Size
 * @value: Value
 *
 * Return: -1
*/

int binary_search(int *array, size_t size, int value)
{
	/* Search boundaries */
	size_t t;
	size_t r = size - 1 ;
	size_t l = 0;
	size_t i;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in Array: ");
		for (i = l; i < r; i++)
			printf("%d, ", array[t]);
		printf("%d\n", array[t]);
		/* Calculate middle index */
		t = (r + l) / 2;

		/* Checking for the mid value */
		if (array[t] < value)
			l = t + 1;

		else if (array[t] > value)
			r = t - 1;
		else
			return (t);
	}
	return (-1);
}
