/* Preprocessors */
#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of the array to stdout
 * @a: ptr, array
 * @n: int, n elements to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
	/* declarations */
	int i;

	if (n < 0)
	{
		n = 0;
	} else
	{
		for (i = 0; i < n; i++)
		{
			if (i == n -1)
			{
				printf("%d\n", a[i]);
			} else
			{
				printf("%d, ", a[i]);
			}
		}
	}
}
