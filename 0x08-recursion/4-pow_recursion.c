/* Preprocessors */
#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: int, the base to raised
 * @y: int, the power to which @x is raised
 * Return: value of x, otherwise -1
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	} else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
