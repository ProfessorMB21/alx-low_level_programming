#include "variadic_functions.h"

/**
* sum_them_all - Returns the sum of all its parameters
* @n: The number of parameters to be supplied
* 
* Return: sum of all parameters
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum = 0, i = 0;

	va_start(args, n);
	
	if (n == 0)
		return (0);

	for (; i < n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);	/** free list */
	return (sum);
}