/* Preprocessors */
#include "main.h"

/**
 * _puts - Prints a string followed by a newline to stdout
 * @str: ptr to string
 * Return: void
 */

void _puts(char *str)
{
	/* declarations */
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
