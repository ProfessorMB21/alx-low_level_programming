/* Preprocessors */
#include "main.h"

/**
 * puts2 - Prints every other character of a string
 * starting with the first character, followed by a new line
 * @str: ptr, string to print
 * Return: void
 */

void puts2(char *str)
{
	/* declarations */
	int i;
	int len = _strlen(str);

	for (i = 0; i < len - 1; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

/**
 * _strlen - Returns the length of a string
 * @s: ptr
 * Return: length of string
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
