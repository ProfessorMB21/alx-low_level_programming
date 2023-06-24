/* Preprocessors */
#include "main.h"

/**
 * print_triangle - Draws a triangle on the terminal of given size
 * @size: int
 *
 * Return: void
 */

void print_triangle(int size)
{
	/* declarations */
	int i, j, q;

	if (size > 0)
	{
		for (q = 0; q < size; q++)
		{
			for (i = size - 1; i > q; i--) /* Prints whitespace */
			{
				_putchar(' ');
			}
			for (j = 0; j < q + 1; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
