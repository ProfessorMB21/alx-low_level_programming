#include "function_pointers.h"

/**
* array_iterator - Executes a function given as a param on
* each element of an array
* @array: array of integers
* @size: size of the array
* @action: function pointer to execute on element of the array
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;
	
	if (array == NULL || action == NULL || size < 0)
		return;
	
	for (i = 0; i < size, i++)
	{
		action(array[i]);
	}
}