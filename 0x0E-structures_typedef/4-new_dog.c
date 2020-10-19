#include "dog.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - dskjaksdja
 * @name: fdfsdf
 * @age: fdsfs
 * @owner: dkjfdsfs
 *
 * Return: fdssd
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));


	if (!d)
	{
		free(d);
		return (NULL);
	}
	if (d)
	{
		d->name = _strdup(name);
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
		d->owner = _strdup(owner);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		d->age = age;
	}

	return (d);
}

/**
 * _strdup - fdsfds
 * @str: fdss
 *
 * Return: fdsd
 */

char *_strdup(char *str)
{
	char *str2;
	int i, n;

	if (str == NULL)
		return (NULL);

	for (n = 0; str[n] != 0; n++)
		;

	str2 = malloc(sizeof(char) * (n + 1));

	if (str2 == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < n; i++)
	{
		*(str2 + i) = *(str + i);
	}

	return (str2);

}
