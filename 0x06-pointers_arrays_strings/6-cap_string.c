/* Preprocessors */
#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @str: ptr, string
 * Return: string
 */

char *cap_string(char *str)
{
	/* declarations */
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		/* Gets the previous character */
		j = i - 1;

		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[j] == ' ' || str[j] == ','
					|| str[j] == ';' || str[j] == '.'
					|| str[j] == '!' || str[j] == '?'
					|| str[j] == '"' || str[j] == '('
					|| str[j] == ')' || str[j] == '{'
					|| str[j] == '}' || str[j] == '\n'
					|| str[j] == '\t')
			{
				str[i] -= 32;
			}
		}
	}
	return (str);
}
