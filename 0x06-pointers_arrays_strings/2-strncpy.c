/* Preprocessors */
#include "main.h"

/**
 * _strncpy - Copies a string and n bytes from src
 * @dest: ptr, destination of string
 * @src: ptr, source of string
 * @n: number of bytes to copy from src
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	/* declarations */
	int i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
