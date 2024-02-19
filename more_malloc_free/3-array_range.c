#include "main.h"
/**
 * array_range - Creates an array of integers
 * @min: parameter
 * @max: parameter
 *
 * Return: pointer to new array
 **/

int *array_range(int min, int max)
{
	int *pointer;
	int aot;
	int a;

	if (min > max)
		return (NULL);

	aot = (max - min) + 1;

pointer = malloc(sizeof(int) * aot);

	if (pointer == NULL)
		return (NULL);
	for (a = 0; min <= max; a++)
		pointer[a] = min++;

return (pointer);
}
