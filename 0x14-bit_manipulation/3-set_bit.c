#include "main.h"

/**
* set_bit - Sets the value of a bit to 1 at a given index
*
* @n: pointer to a long integer
* @index: index of the bit to set to 1
*
* Return: 1 (success), otherwise -1 (fail)
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > INT_SIZE_BITS || n == NULL)
		return (-1);

	*n |= (1 << index);

	return (1); /** success */
}
