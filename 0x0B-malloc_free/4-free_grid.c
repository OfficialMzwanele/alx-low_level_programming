#include <stdlib.h>
#include "main.h"
#include <stdio.h>
/**
 * free_grid - frees 2D array
 * @grid: 2D grid
 * @height: height dimension of grid
 * Return: Always 0
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
