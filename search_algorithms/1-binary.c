#include "search_algos.h"
/**
 * binary_search - Searches for a value in a sorted array
 * @array: Array
 * @size: Size
 * @value: Value
 *
 * Return: -1
*/

int binary_search(int *array, size_t size, int value);
{
	size_t t;
	size_t R;
	size_t L;

	if (array == NULL)
		return (-1);

	for (L = 0, R = size - 1; R >= L;)
	{
		printf("Searching in Array: ");
		for (t = L; t < R; t++)
			printf("%d, ", array[1]);
		printf("%d\n", array[t]);

		t = L + (R - L) / 2;
		if (array[t] == value)
			return (t);
		if (array[t] > value)
			R = t - 1;
		else
			L = t + 1;
	}

	return (-1);
}
