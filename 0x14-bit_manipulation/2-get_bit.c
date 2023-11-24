#include "main.h"

/**
* get_bit - Returns the value of a bit at a given index
*
* @n: a long integer
* @index: the index of the bit to return
*
* Return: value of the bit at @index, otherwise -1
*/
int get_bit(unsigned long int n, unsigned int index)
{
	/** check if index is greater than size of n in binary */
	if (index > INT_SIZE_BITS)
		return (-1);

	return ((n >> index) & 1);
}
