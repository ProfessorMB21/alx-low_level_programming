/* Preprocessors */
#include "main.h"

/**
 * main - prints the string '_putchar' to the terminal
 *
 * Return: 0 (success)
 */

int main(void)
{
	/* declarations */
	char string[] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(string[i]);
	}
	_putchar('\n');
	return (0);
}
