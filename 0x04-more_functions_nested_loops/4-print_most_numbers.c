/* Preprocessors */
#include "main.h"

/**
 * print_most_numbers - Prints numbers to stdout except 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	/* declarations */
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		} else
		{
			_putchar(i + '0');
		}
	}
	_putchar('\n');
}
