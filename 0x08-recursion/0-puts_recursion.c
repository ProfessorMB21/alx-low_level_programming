/* Preprocessors */
#include "main.h"

/**
 * _puts_recursion - Prints a string, followed by a newline
 * @s: ptr, string to print
 * Return: void
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	} else
		_putchar('\n');
}
