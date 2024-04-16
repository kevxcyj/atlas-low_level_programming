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

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("Searching in Array: ");
		for (t = l; t < r; t++)
			printf("%d, ", array[t]);
		printf("%d\n", array[t]);
		/* Calculate middle index */
		t = (r - l) / 2;

		/* Checking for the mid value */
		if (array[t] < value)
			return (t);
		if (array[t] > value)
			r = t - 1;
		else
			l = t + 1;
	}
	return (-1);
}
