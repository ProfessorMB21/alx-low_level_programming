/* Preprocessors */
#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: int
 *
 * Return: void
 */

void print_to_98(int n)
{
	/* declarations */
	int i;
	int lastDigit = 98;

	if (n <= lastDigit)
	{
		for (i = n; i <= lastDigit; i++)
		{
			if (i == lastDigit)
			{
				printf("%d", i);
			} else
			{
				printf("%d, ", i);
			}
		}
	} else
	{
		for (i = n; i <= lastDigit; i--)
		{
			if (i == lastDigit)
			{
				printf("%d", i);
			} else
			{
				printf("%d, ", i);
			}
		}
	}
	putchar('\n');
}
