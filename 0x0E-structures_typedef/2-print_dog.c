#include "dog.h"

/**
* print_dog - Prints a struct dog
* @d: struct dog type
* Return: void
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		(d->name == NULL) ? printf("Name: (nil)\n") : printf("Name: %s\n", (*d).name);
		printf("Age: %.6f\n", (*d).age);
		(d->owner == NULL) ? printf("Owner: (nil)\n") : printf("Owner: %s\n", (*d).owner);
	}
}