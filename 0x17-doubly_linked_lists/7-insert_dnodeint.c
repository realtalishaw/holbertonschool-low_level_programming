#include "lists.h"

/**
 * insert_dnodeint_at_index - ooooo girl you shinin
 * @h: like a fifth avenue diamond
 * @idx: something something something else
 * @n: something runnin out of time
 *
 * Return: Bruno Mars maybe
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp = *h;
	unsigned int i = 0;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp)
	{
		if (i == idx - 1 && tmp->next == NULL)
		{
			return (add_dnodeint_end(h, n));
		}
		if (i == idx - 1)
		{
			newnode->next = tmp->next;
			newnode->prev = tmp;
			tmp->next = newnode;
			tmp = newnode;
			tmp->next->prev = newnode;
			return (newnode);
		}
		tmp = tmp->next;
		i++;
	}
	return (NULL);
}
