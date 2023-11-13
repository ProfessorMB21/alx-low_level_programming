#include "function_pointers.h"

/**
* int_index - Searches for an integer
* @array: array
* @size: size of array
* @cmp: function pointer used to compare values
*
* Return: -1 if no element matches, the index of
* the first element for which the @cmp function
* does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array != NULL || size < 0 || cmp != NULL)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
			{
				return (index);
			}
		}
	} else
	{
		return (0);
	}
	return (-1);
}
