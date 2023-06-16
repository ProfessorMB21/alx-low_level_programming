/* Preprocessors */
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	/* declarations */
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if ((i != 'e') || (i != 'q'))
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
