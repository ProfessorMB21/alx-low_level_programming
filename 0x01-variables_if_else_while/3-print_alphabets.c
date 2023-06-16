/* Preprocessors */
#include <stdio.h>

/**
 * main - prints the alphabet in lowercase then in uppercase
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
		putchar(i);
	} for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
