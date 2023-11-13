#include "function_pointers.h"

/**
* print_name - Prints a name
* @name: ptr, name to print
* @f: function pointer to print @name
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
