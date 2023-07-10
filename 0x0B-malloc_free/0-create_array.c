/* Preprocessors */
#include "main.h"
#include <stdlib.h>

/**
 * create_array - Creates an array of chars initializing
 * it with a specific char
 * @size: int, size of array
 * @c: char, initializing char
 * Return: pointer to arr, otherwise NULL
 */

char *create_array(unsigned int size, char c)
{
	/* declarations */
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	i = 0;
	arr = malloc(sizeof(char) * size);

	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}
