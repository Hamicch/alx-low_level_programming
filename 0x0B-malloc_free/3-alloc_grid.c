#include <stdlib.h>

/**
 * alloc_grid - Creates a 2 dimensional array of integers
 *
 * @width: Width/rows of the 2D array
 *
 * @height: Height/columns of the 2D array
 *
 * Return: Pointer to a 2 dimenstional array of integers
 */

int **alloc_grid(int width, int height)
{
	int i, j, *alloc_mem;

	if (width <= 0 || height <= 0)
		return ('\0');

	alloc_mem = malloc(sizeof(int[width][height]);

			if alloc_mem == NULL)
				return ('\0');

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
			alloc_mem[i][j] = 0;
	}

	return (alloc_mem);
}
