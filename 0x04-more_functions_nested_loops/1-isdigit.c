/* Preprocessors */
#include "main.h"

/**
 * _isdigit - Checks if character is a digit.
 * @c: int
 *
 * Return: 1 (success), otherwise 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
