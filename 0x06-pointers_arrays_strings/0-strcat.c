/* Preprocessors */
#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: ptr, destination to append
 * @src: ptr, source to be appended to destination
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	/* declarations */
	int i, j;

	j = 0;
	while (dest[j])
	{
		j++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[j++] = src[i];
	}
	return (dest);
}
