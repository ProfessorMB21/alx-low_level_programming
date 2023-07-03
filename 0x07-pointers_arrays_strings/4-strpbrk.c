/* Preprocessors */
#include "main.h"

/**
 * _strpbrk - Searches a string for any set of bytes
 * @s: ptr, string to be search
 * @accept: string to search for
 * Return: pointer, otherwise 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		while (*accept != '\0')
		{
			if (*s == *accept)
				return (s);
			accept++;
		}
		s++;
	}
	return (0);
}
