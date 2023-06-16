/* Preprocessor */
#include <stdio.h>

/**
 * main - prints all possible different combinations of three digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	int i;
	int j;
	int k;

	for (i = 0; i < 10; ++i)
	{
		for (j = i + 1; j < 10; ++j)
		{
			for (k = j + 1; k < 10; ++k)
			{
				putchar(48 + i);
				putchar(48 + j);
				putchar(48 + k);
				if (i == 7)
				{
					continue;
				} else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
