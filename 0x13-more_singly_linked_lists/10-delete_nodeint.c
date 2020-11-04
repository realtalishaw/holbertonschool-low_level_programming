#include "lists.h"

/**
 * delete_nodeint_at_index - gfddgf
 * @head: gfdgf
 * @index: gfdgf
 *
 * Return: gfgdf
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *rmv;
	unsigned int i;

	tmp = *head;

	if (!*head)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
	}

	else
	{
		for (i = 0; i < index - 1; i++)
		{
			tmp = tmp->next;
			if (!tmp)
				return (-1);
		}
		rmv = tmp;
		rmv = rmv->next;
		tmp->next = rmv->next;

		free(rmv);
	}
	return (1);
}
