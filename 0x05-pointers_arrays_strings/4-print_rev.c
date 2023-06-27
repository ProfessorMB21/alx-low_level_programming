/* Preprocessors */
#include "main.h"

/**
 * print_rev - Prints a string in reverse, followed by a newline
 * @s: ptr to string
 * Return: void
 */

void print_rev(char *s)
{
	/* declarations */
	int i;

	for (i = _strlen(s) - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
