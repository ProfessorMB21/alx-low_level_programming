/* Preprocessors */
#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: ptr, string
 * @c: character to be located
 * Return: pointer, otherwise 0
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (*s == c)
	{
		return (s);
	}

	return (0);
}
