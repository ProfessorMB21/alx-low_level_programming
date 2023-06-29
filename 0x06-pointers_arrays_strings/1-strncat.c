/* Preprocessors */
#include "main.h"

/**
 * _strncat - Concatenates two strings and adds n bytes from src
 * @dest: ptr, destination
 * @src: ptr, source
 * @n: byte to be added
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	/* declarations */
	int i, j;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[j++] = src[i];
	}
	dest[j + 1] = '\0';
	return (dest);
}
