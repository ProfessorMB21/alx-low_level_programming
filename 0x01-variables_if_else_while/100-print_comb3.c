/* Preprocessors */
#include <stdio.h>

/**
 * main - prints the combination fo two digits
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = i + 1; j < 10; j++)
		{
			putchar(48 + i);
			putchar(48 + j);
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
