#include "lists.h"

/**
 * pop_listint - gfdsf
 * @head: fdfdd
 *
 * Return: fdgfdg
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i;

	if (!*head)
		return (0);

	tmp = *head;
	*head = (*head)->next;
	i = tmp->n;

	free(tmp);

	return (i);
}
