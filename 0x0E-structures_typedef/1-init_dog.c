#include "dog.h"

/**
* init_dog - Initializes variable of type struct dog
* @d: ptr, struct dog
* @name: ptr, name of dog
* @age: age of dog
* @owner: owner of dog
* Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == (void *)NULL)
		return (NULL);
	
	/* initialize struct dog */
	d->name = name;
	d->age = age;
	d->owner = owner;
}