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
	int n, m, prod;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			prod = m * n;
			_putchar(48 + (prod / 10));
			_putchar(48 + (prod % 10));
			if (m == 9)
			{
				continue;	/* prevent trailing spaces */
			} else
			{
				_putchar(',');
				_putchar('\t');
			}
		}
		_putchar('\n');
	}
}
