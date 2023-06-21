/* Preprocessors */
#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */

void jack_bauer(void)
{
	/* declarations */
	int i, j, k, m, hours;

	hours = 10;
	for (i = 0; i < 3; i++)
	{
		if (i == 2)
		{
			hours = 4;
		}
		for (j = 0; j < hours; j++)
		{
			for (k = 0; k < 6; k++)
			{
				for (m = 0; m < 10; m++)
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(m + '0');
					_putchar('\n');
				}
			}
		}
	}
}
