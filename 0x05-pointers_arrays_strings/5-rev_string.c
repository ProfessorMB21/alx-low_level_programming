/* Preprocessors */
#include "main.h"
#include <string.h>

/**
 * rev_string - Reverses a string
 * @s: string to be reversed
 * Return: void
 */

void rev_string(char *s)
{
	/* declarations */
	int len, i, j;
	char c;

	len = strlen(s);
	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		s[i] = s[j];
		s[j] = c;
	}
}
