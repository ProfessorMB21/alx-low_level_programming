/* Preprocessors */
#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: ptr, a string
 * @s2: ptr, a string
 * Return: diff
 */

int _strcmp(char *s1, char *s2)
{
	/* declarations */
	int i, diff = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}

	}
	return (diff);
}
