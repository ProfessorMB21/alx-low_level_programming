/* Preprocessors */
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: int
 *
 * Return: void
 */

void print_to_98(int n)
{
	/* declarations */
	int i, j;
	int lastDigit = 9;

	for (i = n; i <= 9; i++)
	{
		if (i == 9)
		{
			lastDigit = 8;
		}
		for (j = 0; j <= lastDigit; j++)
		{
			_putchar(i);
			_putchar(j);
			if (j == lastDigit && i == 9)
			{
				continue;
			} else
			{
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
