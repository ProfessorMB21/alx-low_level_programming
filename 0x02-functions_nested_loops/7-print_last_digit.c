/* Preprocessors */
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: int
 *
 * Return: remainder (success)
 */

int print_last_digit(int i)
{
	/* declarations */
	int remainder = i % 10;

	if (i < 0)
	{
		remainder = remainder * -1;
	}
	_putchar(remainder + '0');
	return (remainder);
}
