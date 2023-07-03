/* Preprocessors */
#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: ptr, destination where to copy @n bytes
 * @src: ptr, source
 * @n: non-zero bytes of memory
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	/* declarations */
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
