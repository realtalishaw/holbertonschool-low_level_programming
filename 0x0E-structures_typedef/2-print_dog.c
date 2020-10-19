#include "dog.h"
#include <stdio.h>
#include <stdio.h>

/**
 * print_dog - djsaksda
 * @d: dsfs
 *
 * Return: dsad
 */

void print_dog(struct dog *d)
{

	if (!d)
		return;
	else
	{
		if (d->name == NULL)
			d->name = "(nil)";
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
			d->owner = "(nil)";
		else
			printf("Owner: %s\n", d->owner);
	}
}
