#include "dog.h"

/**
* free_dog - Frees dog
* @d: ptr, struct dog
* Return: void
*/
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}