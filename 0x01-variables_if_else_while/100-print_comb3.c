/* Preprocessors */
#include <stdio.h>

/**
 * main - prints the combination of two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	int i;
	int j;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			if (i == 8)
			{
				continue;
			} else
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
