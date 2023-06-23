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

	if (n <= 0)
	{
		_putchar('\n');
	}

	for (i = 0; i <= n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
