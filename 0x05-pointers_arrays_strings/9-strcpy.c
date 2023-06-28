/* Preprocessors */
#include "main.h"

/**
 * _strcpy - Copies a string pointer by src to buffer pointed to by dest
 * @dest: ptr, destination of copied string
 * @src: ptr, origin of copied string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	/* declarations */
	int i;

	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	*(dest + i) = '\0';
	return (dest);
}
