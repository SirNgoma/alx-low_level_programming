#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid - returns a pointer
 * @width: width of the grid
 * @height: height of the grid
 * Return: Zero
 **/

int **alloc_grid(int width, int height)
{
	int **grid;

	int x, y;



	if (width <= 0 || height <= 0)

		return (NULL);

	grid = (int **)malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);
	for (x = 0; x < height; x++)
	{
		grid[x] = (int *)malloc(width * sizeof(int));

		if (grid[x] == NULL);
	}
	for (y = 0; y <= x; y++)
		free(grid[y]);
	free(grid);

	return (NULL);
}}



	for (y = 0; y < height; y++)

				

												for (x = 0; x < width; x++){
													grid[y][x] = 0;
												}
													}}
return (grid);
}
