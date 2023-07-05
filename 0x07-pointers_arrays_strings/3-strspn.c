/* Preprocessors */
#include "main.h"

/**
 * _strspn - Returns the length of a prefix substring
 * @s: ptr, string
 * @accept: string
 * Return: number of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	/* declarations */
	int i, j;
	unsigned int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				count++;
				break;
			} else if (accept[j + 1] == '\0')
			{
				return (count);
			}
		}
		if (s[i] == '\0')
		{
			return (count);
		}
	}
	return (count);
}
