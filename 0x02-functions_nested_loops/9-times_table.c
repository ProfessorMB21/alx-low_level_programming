/* Preprocessors */
#include "main.h"

/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */

void times_table(void)
{
	/* declarations */
	int i, j, prod, remainder, quotient;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			prod = i * j;
			remainder = prod % 10;
			quotient = prod / 10;

			if (j == 9)
			{
				if (prod >= 10)
				{
					_putchar(quotient + '0');
					_putchar(remainder + '0');
				} else
				{
					_putchar(remainder + '0');
				}
			} else if (prod >= 10)
			{
				_putchar(quotient + '0');
				_putchar(remainder + '0');
				_putchar(',');
				_putchar(' ');
			} else
			{
				_putchar(remainder + '0');
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
