/* Preprocessors */
#include "main.h"

/**
 * string_toupper - Changes all lowercase letters in a string
 * to uppercase
 * @str: ptr, string
 * Return: string
 */

char *string_toupper(char *str)
{
	/* declarations */
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}
	return (str);
}
