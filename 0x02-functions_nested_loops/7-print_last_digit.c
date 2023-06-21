/* Preprocessors */
#include "main.h"

/**
 * print_last_digit - Prints the last digit of a number
 * @i: int
 *
 * Return: r (success)
 */

int print_last_digit(int i)
{
	/* declarations */
	int r = i % 10;

	_putchar(r);
	return (r);
}
