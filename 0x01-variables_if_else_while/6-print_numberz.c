/* Preprocessors */
#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10 using putchar
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
