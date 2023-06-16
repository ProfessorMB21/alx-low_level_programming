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
		if (i == 'e')
		{
			continue;
		} else if (i == 'q')
		{
			continue;
		} else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
