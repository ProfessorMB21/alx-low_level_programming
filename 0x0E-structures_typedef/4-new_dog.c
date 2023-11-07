#include "dog.h"

/**
* _strlen - Returns length of a string
* @s: ptr, string to return length
* Return: len
*/
int _strlen(char *s)
{
	int len;
	
	if (s == NULL)
		return (0);
	
	len = 0;
	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
* _strcpy - Copies string
* @dest: destination(buffer) in which string is copied
* @src: source where copy string from
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int s_len, i;
	
	s_len = _strlen(src);
	i = 0;	
	
	while (i < s_len)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	
	return (dest);
}

/**
* new_dog - Creates a new dog
* @name: name of dog
* @age: age of dog
* @owner: owner of dog
* Return: pointer to new dog, otherwise NULL
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	/* declarations */
	dog_t *d;
	int n_len, o_len;
	
	/* returns NULL if name and owner are empty or age is less than 0 */
	if (!name || age < 0 || !owner)
		return (NULL);
	
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);
	
	/* get name and owner lengths */
	n_len = _strlen(name);
	o_len = _strlen(owner);
	
	d->name = malloc(sizeof(char) * (n_len + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	
	d->owner = malloc(sizeof(char) * (o_len + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	
	d->name = _strcpy(d->name, name);
	d->age = age;
	d->owner = _strcpy(d->owner, owner);
	
	return (d);
}