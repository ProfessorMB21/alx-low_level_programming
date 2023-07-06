/* Preprocessors */
#include "main.h"

/**
 * _square - Check the integer
 * @square: squared int
 * @i: test int
 * Return: square root
 */

int _square(int square, int i)
{
	if (i * i == square)
	{
		return (square);
	} else if (i > square / i)
	{
		return (_square(square, i - 1));
	} else if (i < square / i)
	{
		return (_square(square, i + 1));
	} else if (i == 0 || i == 1)
	{
		return (i);
	}
	return (-1);
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: int, integer to return square root
 * Return: square root, otherwise -1
 */

int _sqrt_recursion(int n)
{
	return (_square(n, i));
}
