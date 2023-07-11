/* Preprocessors */
#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2d array of integers
 * @width: int, width of the array
 * @height: int, height of the array
 * Return: pointer to array, otherwise NULL
 */

int **alloc_grid(int width, int height)
{
	/* declarations */
	int **arr;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	i = 0;
	arr = malloc(sizeof(int) * height);

	if (arr == NULL)
		return (NULL);

	while (i < height)
	{
		j = 0;
		arr[i] = malloc(sizeof(int) * width);

		if (arr[i] == NULL)
		{
			while (i >= 0)
			{
				free(arr[i]);
				i--;
			}
			free(arr);
			return (NULL);
		}

		while (j < width)
		{
			arr[i][j] = 0;
			j++;
		}
		i++;
	}
	return (arr);
}
