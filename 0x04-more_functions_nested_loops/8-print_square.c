/* Preprocessors */
#include "main.h"

/**
 * print_square - Prints a square of given size on the terminal
 * @size: int
 *
 * Return: void
 */

void print_square(int size)
{
	/* declarations */
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
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
