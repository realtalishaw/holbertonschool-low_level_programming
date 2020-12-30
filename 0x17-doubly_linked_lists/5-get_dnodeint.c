#include "lists.h"

/**
 * get_dnodeint_at_index - e
 * @head: f
 * @index: g
 *
 * Return: h
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	tmp = head;

	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;

	if (i != index)
		return (NULL);

	return (tmp);
}
