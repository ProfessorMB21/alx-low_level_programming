/* Preprocessors */
#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
