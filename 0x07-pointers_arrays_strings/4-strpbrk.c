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
	/* declarations */
	int i;

	while (*s != '\0')
	{
		i = 0;
		while (accept[i] != '\0')
		{
			if (*s == accept[i])
				return (s);
			i++;
		}
		s++;
	}
	return ('\0');
}
