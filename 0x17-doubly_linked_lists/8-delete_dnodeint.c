#include "lists.h"

/**
 * delete_dnodeint_at_index - ffjdsf
 * @head: jfds
 * @index: fedsf
 *
 * Return: ffdfs
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{

	dlistint_t *oldnode;
	unsigned int i = 0;

	oldnode = *head;

	if (!*head)
		return (-1);

	while(oldnode)
	{
		if (i == index)
		{
			if (oldnode->prev)
				oldnode->prev->next = oldnode->next;
			if (oldnode->next)
				oldnode->next->prev = oldnode->prev;
			if (i == 0)
				*head = oldnode->next;
			free(oldnode);
			return (1);
		}
		oldnode = oldnode->next;
		i++;
	}
	return (-1);
}
