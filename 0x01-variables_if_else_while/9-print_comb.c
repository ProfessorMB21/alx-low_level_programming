/* Preprocessors */
#include <stdio.h>

/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(48 + i);
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		} else
		{
			continue;
		}
	}

	putchar('\n');
	return (0);
}
