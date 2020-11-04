#include "lists.h"

/**
 * insert_nodeint_at_index - eye roll
 * @head: fggdfgd
 * @index: gfgdf
 * @n: fgdgd
 *
 * Return: fdgddgd
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *newnode;
	listint_t *tmp;
	unsigned int i = 0;

	newnode = malloc(sizeof(listint_t));
	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;
	tmp = *head;

	if (!*head && index > 0)
	{
		free(newnode);
		return (NULL);
	}

	if (index == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}

	while (i < index - 1)
	{
		tmp = tmp->next;
		if (!tmp && index - i > 0)
		{
			free(newnode);
			return (NULL);
		}
		i++;
	}
	newnode->next = tmp->next;
	tmp->next = newnode;

	return (newnode);
}
