#include "variadic_functions.h"

/**
* print_strings - Prints strings to stdout, followed by a newline
* @separator: ptr, a string to be printed between the strings
* @n: The number of strings to be passed to the function
*
* Print @separator if not NULL
* Print (nil) if one of the strings is NULL
* Print a new line at the end of the function
*
* Return: void
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i;
	char *s;
	
	for (i = 0; i < n; i++)
	{
		s = va_arg(args, char *);
		/** check if string passed is NULL */
		if (s == NULL)
		{
			printf("(nil)");
		} else {
			printf("%s", s);
		}
		
		/** ONLY print separator between args */
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);	/**cleaning up */
	printf("\n");
}