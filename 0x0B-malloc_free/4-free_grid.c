#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - frees 2d previosly created array
 * @grid: grid address
 * @height: grid height
 * Return: Zero
 **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);

	}

	free(grid);

}
