#include "dog.h"

/**
* print_dog - Prints a struct dog
* @d: struct dog type
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d != (void *)NULL)
	{
		printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		printf("Owner: %s\n", (*d).owner);
	}
}