#include "main.h"
/**
 * alloc_grid - returns a pointer to a two
 *  dimensional array of integers
 * @width: parameter
 * @height: parameter
 *
 * Return: 0
 **/

int **alloc_grid(int width, int height)
{
	int **k;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

k = malloc(sizeof(int *) * height);

	if (k == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		k[a] = malloc(sizeof(int) * width);

		if (k[a] == NULL)
		{
			free(k);

			for (b = 0; b <= height; b++)
				free(k[b]);
			return (NULL);
		}
	for (b = 0; b < width; b++)
		k[a][b] = 0;
	}
return (k);
}
