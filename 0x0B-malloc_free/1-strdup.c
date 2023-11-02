/* Preprocessors */
#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Returns a pointer to a newly allocated space in memory
 * which contains a copy of the string @str given
 * @str: ptr, string to copy
 * Return: pointer to duplicate of string @str
 */

char *_strdup(char *str)
{
	/* declarations */
	char *dup_str;
	int size_str = 0, i;

	if (str == NULL)
		return (NULL);

	/* get str length */
	while (*(str + size_str) != '\0')
	{
		size_str++;
	}

	dup_str = malloc(sizeof(char) * size_str + 1);
	i = 0;

	if (dup_str == NULL)
		return (NULL);

	while (i < size_str)
	{
		dup_str[i] = str[i];
		i++;
	}
	dup_str[size_str] = '\0';
	return (dup_str);
}
