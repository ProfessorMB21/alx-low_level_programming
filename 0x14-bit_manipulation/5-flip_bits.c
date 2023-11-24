#include "main.h"

/**
* flip_bits - Returns the number of bits needed to flip to get from
* one number to another
*
* @n: a long integer
* @m: a long integer
*
* Return: number of bits required to flip from one number to another
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	unsigned int flip;

	flip = 0;
	diff = n ^ m; /** get the bit difference of the numbers */
	while (diff)
	{
		flip += diff & 1;
		diff >>= 1;
	}

	return (flip);
}
