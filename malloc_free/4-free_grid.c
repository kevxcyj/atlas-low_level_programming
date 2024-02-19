#include "main.h"
/**
 * free_grid \ - Frees a two dimensional grid
 * @grid: parameter
 * @height: parameter
 *
 * Return: 0
 **/

void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
		free(grid[a]);
free(grid);
}
