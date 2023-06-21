/* Preprocessors */
#include "main.h"

/**
 * _abs - Computes the absolute value of an integer
 * @i: int
 *
 * Return: int (sucess)
 */

int _abs(int i)
{
	if (i < 0)
	{
		return (i * -1);
	} else if (i > 0)
	{
		return (i);
	}
	return (0);
}
