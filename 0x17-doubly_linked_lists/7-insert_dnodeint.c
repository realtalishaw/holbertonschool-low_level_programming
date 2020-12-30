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

	if (idx == 0)
		return (add_dnodeint(h, n));

	while (tmp)
	{
		if (i == idx - 1 && tmp->next != NULL)
		{
			newnode->n = n;
			newnode->next = tmp->next;
			newnode->prev = tmp;
			tmp->next->prev = newnode;
			tmp->next = newnode;
		}
		else if (i == idx - 1 && tmp->next == NULL)
			return (add_dnodeint(h, n));
		tmp = tmp->next;
		i++;
	}

	if (idx > 1)
		return (NULL);

	return (newnode);
}
