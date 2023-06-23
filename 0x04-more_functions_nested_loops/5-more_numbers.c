/* Preprocessors */
#include "main.h"

/**
 * more_numbers - Prints 10 times the numbers from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	/* declarations */
	int i, j;
	int limit = 9;

	for (i = 0; i < 2; i++)
	{
		if (i == 1)
		{
			limit = 4;
		}
		for (j = 0; j <= limit; j++)
		{
			_putchar(i + '0');
			_putchar(j + '0');
		}
	}
	_putchar('\n');
}
