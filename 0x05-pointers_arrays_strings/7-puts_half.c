/* Preprocessors */
#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: ptr, string to print
 * Return: void
 */

void puts_half(char *str)
{
	/* declarations */
	int max_len, i, n;

	max_len = _strlen(str);
	if (max_len % 2 == 0)
	{
		n = max_len / 2;
	} else if (max_len % 2 == 1)
	{
		n = (max_len + 1) / 2;
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string
 * @s: ptr, string
 * Return: length of the string
 */

int _strlen(char *s)
{
	/* declarations */
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
