#include "lists.h"

/**
 * add_dnodeint_end - fds
 * @head: fdf
 * @n: fdfd
 *
 * Return: fsfs
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmpnode;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
	{
		newnode->prev = NULL;
		*head = newnode;
	}
	else
	{
		tmpnode = *head;
		while (tmpnode->next)
			tmpnode = tmpnode->next;
		tmpnode->next = newnode;
		newnode->prev = tmpnode;
	}
	return (newnode);
}
