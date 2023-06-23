/* Preprocessors */
#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal
 * @n: int representing n time the char \ should be printed
 *
 * Return: void
 */

void print_diagonal(int n)
{
	/* declarations */
	int i, j;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
