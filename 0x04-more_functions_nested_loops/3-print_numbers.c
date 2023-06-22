/* Preprocessors */
#include "main.h"

/**
 * print_numbers - Prints to stdout numbers from 0 to 9
 *
 * Return: void
 */

void print_numbers(void)
{
	/* declarations */
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
