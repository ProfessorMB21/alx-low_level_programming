#include "main.h"

/**
* print_binary - Prints the binary representation of a number
*
* @n: a long integer
*
* Return: void
*/
void print_binary(unsigned long int n)
{
	const unsigned long int number = n;

	if (number > 1)
		/**recursively find the binary of number by right shifting bits by 1*/
		print_binary(number >> 1);

//	_putchar((number & 1) + '0');
}
