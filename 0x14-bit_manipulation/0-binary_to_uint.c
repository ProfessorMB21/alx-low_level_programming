#include "main.h"

/**
* binary_to_uint - Converts a binary number to an unsigned int
*
* @b: pointer to string of 0 and 1 chars
*
* Return: the converted number, otherwise 0 (if @b is NULL or invalid chars)
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int converted = 0, i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);

		converted = 2 * converted + (b[i] - '0');
	}
	return (converted);
}
