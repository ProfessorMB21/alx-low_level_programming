/* Preprocessors */
#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: ptr, array
 * @n: number of elements to swap
 * Return: void
 */

void reverse_array(int *a, int n)
{
	/* declarations */
	int temp, i, len;

	len = n - 1;
	for (i = 0; i < len; i++, len--)
	{
		temp = a[i];
		a[i] = a[len];
		a[len] = temp;
	}
}
