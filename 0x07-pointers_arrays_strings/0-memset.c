/* Preprocessors */
#include "main.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: ptr, points to memory area
 * @b: constant byte to fill memory
 * @n: non-zero bytes of memory
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	/* declarations */
	int i;

	for (i = 0; *(s + i) < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
