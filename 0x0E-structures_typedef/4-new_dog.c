#include "dog.h"
#include <stdlib.h>

/**
* _strlen - returns the length of a string.
* @s : pointers
* Return: val.
*/

int _strlen(char *s)
{
	int val = 0;

	while (s[val] != 0)
	{
		val++;
	}
	return (val);
}

/**
* *_strncpy - function that copies a string.
* @dest: pointer
* @src: pointer
* @n: variable
* Return: dest
*/

char *_strncpy(char *dest, char *src, int n)
{
	int f = 0;

	while (f < n && src[f] != '\0')
	{
		dest[f] = src[f];
		f++;
	}
	while (f < n)
	{
	dest[f] = '\0';
	f++;
	}
	return (dest);
}
/**
* *new_dog - function that creates a new dog.
* @name : name
* @age : age
* @owner : owner
* Return: dog_t
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int t_name = 0;
	int t_owner = 0;

	if (name == NULL || owner == NULL)
		return (NULL);
	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	t_name = _strlen(name);
	t_owner = _strlen(owner);

	d->name = malloc(sizeof(char) * t_name + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * t_owner + 1);
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}
	d->name = _strncpy(d->name, name, t_name + 1);
	d->owner = _strncpy(d->owner, owner, t_owner + 1);
	d->age = age;
	return (d);
}
