/* Preprocessors */
#include <stdio.h>

/**
 * print_diagsums - Prints the sum of two diagonals
 * of a square matrix of integers
 * @a: ptr, array of integers
 * @size: size of array
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	/* declarations */
	int i, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
	}

	for (i = size - 1; i >= 0; i--)
	{
		sum2 += a[i * size + (size - i - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
