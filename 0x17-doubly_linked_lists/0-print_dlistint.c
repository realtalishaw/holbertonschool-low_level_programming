#include "lists.h"

/**
 * print_dlistint - fjklsjds
 * @h: fks
 *
 * Return: djksds
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;
	const dlistint_t *list = h;

	if (!h)
		return (i);
	while (list)
	{
		printf("%i\n", list->n);
		list = list->next;
		i++;
	}
	return (i);
}
