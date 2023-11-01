/* Preprocessors */
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Concatenates two string
 * @s1:ptr, string
 * @s2: ptr, string
 * Return: pointer to new string, otherwise NULL
 */

char *str_concat(char *s1, char *s2)
{
	/* declarations */
	int len1 = 0, len2 = 0, i, j, total_size;
	char *str;

	/* let s1 and s2 be empty strings if their value is NULL */
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	/* get string lengths */
	for (i = 0; s1[i] != '\0'; i++)
		len1++;

	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	total_size = len1 + len2;
	str = malloc(sizeof(char) * total_size + 1);
	i = 0;
	j = 0;

	if (str == NULL)
		return (NULL);

	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[total_size] = '\0';
	return (str);
}
