/* Preprocessors */
#include "main.h"

/**
 * print_line - Draws a line in the terminal
 * @n: int
 *
 * Return: void
 */

void print_line(int n)
{
	/* declarations */
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
