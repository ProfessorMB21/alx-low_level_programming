#include "variadic_functions.h"

/**
* print_numbers - Prints numbers to stdout, followed by a newline
* @separator: A string to be printed between numbers
* @n: The number of integers to be passed to the function
* 
* Does not print @separator if it is NULL
* Prints a new line at the end of the function
* 
* Return: void
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i = 0;
	
	for (; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		/** print separator between args ONLY */
		if (separator != NULL && i != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(args);	/** free list */
	printf("\n");
}