/* Preprocessors */
#include "main.h"

/**
 * _islower - Checks for lowercase character
 * @c: an ASCII character
 *
 * Return: 1 (success), 0 (otherwise)
 */

int _islower(int c)
{
	/* declarations */
	int lower_bound = 'a';
	int upper_bound = 'z';

	if (c >= lower_bound && c <= upper_bound)
	{
		return (1);
	}
}
