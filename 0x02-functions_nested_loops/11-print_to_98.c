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

	for (i = n; i <= 98; i++)
	{
		if (i == 98)
		{
			printf("%d", i);
		}
		printf("%d, ", i);
	}
}
