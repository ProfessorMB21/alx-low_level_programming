#include "main.h"

/**
* clear_bit - Sets the value of a bit to 0 at a given index
*
* @n: pointer to a long integer
* @index: the index of the bit to set to 0
*
* Return: 1 (success), otherwise -1 (fail)
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (n == NULL || index > INT_SIZE_BITS)
		return (-1);

	i = ~(i << index);
	*n &= i; /** set bit to 0 at index */

	return (1); /** success */
}
