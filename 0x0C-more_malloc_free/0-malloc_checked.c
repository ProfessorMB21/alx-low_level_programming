#include "main.h"

/**
* malloc_checked - Returns a pointer to allocated memory
* @b: non-zero number of bytes to be allocated
* Return: pointer to allocated memory, otherwise return 98
*/
void *malloc_checked(unsigned int b)
{
	/* declarations */
	void *alloc_mem;
	
	alloc_mem = malloc(b);
	if (b <= 0 || alloc_mem == NULL)
	{
		exit(98);
	}
	return (alloc_mem);
}