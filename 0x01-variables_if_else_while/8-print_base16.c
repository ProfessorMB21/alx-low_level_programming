/* Preprocessors */
#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	char c;

	for (c = 0; c < 10; c++)
	{
		putchar(48 + c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
