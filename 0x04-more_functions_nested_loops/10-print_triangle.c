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
	int i, j, grid;

	grid = -size;
	if (size > 0)
	{
		for (i = 0; i > grid; i--)
		{
			for (j = 0; j > i; j--)
			{
				putchar('#');
			}
			_putchar(
		}
	} else
	{
		_putchar('\n');
	}
}
