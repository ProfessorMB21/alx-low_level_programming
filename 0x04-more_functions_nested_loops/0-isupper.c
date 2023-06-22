/* Preprocessors */
#include "main.h"

/**
 * _isupper - Checks if character is uppercase.
 * @c: int
 *
 * Return: 1 (success), otherwise 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
