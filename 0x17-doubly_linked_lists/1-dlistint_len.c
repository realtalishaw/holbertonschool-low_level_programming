#include "lists.h"

/**
 * dlistint_len - jdsfsd
 * @h: fkdsd
 *
 * Return: fsd
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *list = h;
	int i = 0;

	if (!h)
		return (i);
	while (list)
	{
		list = list->next;
		i++;
	}
	return (i);
}
