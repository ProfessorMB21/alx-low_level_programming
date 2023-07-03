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
	/* declarations */
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s[i]);
	}
	return (0);
}
