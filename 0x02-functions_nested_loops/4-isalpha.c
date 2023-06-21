/* Preprocessors */
#include "main.h"

/**
 * _isalpha - Checks if character is alphabetical
 * @c: ASCII character, a letter
 *
 * Return: 1 (if letter)
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
