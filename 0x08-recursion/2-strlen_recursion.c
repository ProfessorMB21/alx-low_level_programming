/* Preprocessors */
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string
 * @s: ptr, string to return length
 * Return: length of string @s
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
