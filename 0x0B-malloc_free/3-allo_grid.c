#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array
 * @width: The width of the 2 dimensional array
 * @height: The height of the 2 dimentional array
 * Return: width <= 0. height <= 0
 */
int **alloc_grid(int width, int height)
{
	int **two_D;
	int hight_index, wid_index;

	if (width <= 0 || height <= 0)
		return (NULL);

	two_D = malloc(sizeof(int *) * height);
	if (two_D == NULL)
		return (NULL);

	for (hight_index = 0; hight_index < height; hight_index++)
	{
		two_D[hight_index] = malloc(sizeof(int) * width);

		if (two_D[hight_index] == NULL)
		{
			for (; hight_index >= 0; hight_index--)
				free(two_D[hight_index]);
			free(two_D);
			return (NULL);
		}
	}
	for (hight_index = 0; hight_index < height; hight_index++)
	{
		for (wid_index = 0; wid_index < width; wid_index++)
			two_D[hight_index][wid_index] = 0;
	}
	return (two_D);
}
