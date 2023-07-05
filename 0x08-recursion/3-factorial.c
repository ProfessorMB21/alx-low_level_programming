/* Preprocessors */
#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: int, integer to return factorial
 * Return: factorial of n, otherwise -1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if ( n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
