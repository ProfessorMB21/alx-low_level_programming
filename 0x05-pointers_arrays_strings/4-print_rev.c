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

/**
 * _strlen - Returns the length of a string
 * @s: ptr to string
 * Return: length of string
*/

int _strlen(char *s)
{
	/* declarations */
	int len, i;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

