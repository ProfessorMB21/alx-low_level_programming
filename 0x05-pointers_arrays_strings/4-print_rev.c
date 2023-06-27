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
	int i, len;

	len = _strlen(s);
	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}

int _strlen(char *s)
{
	/* declarations */
	int len;

	for (i = 0; s[i] != '\0'; i++)
	{
			len++;
	}
	return (len);
}
