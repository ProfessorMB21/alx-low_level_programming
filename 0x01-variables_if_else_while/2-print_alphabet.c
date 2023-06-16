#include <stdio.h>

/**
 * main - prints the alphabet in lowercase
 *
 * Return: 0 (success)
 *
 */

int main(void)
{
	/* declarations */
	char i;

	for (i='a'; i <= 'z'; ++i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
