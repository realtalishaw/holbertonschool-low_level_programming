#include "lists.h"

/**
 * free_dlistint - a
 * @head: b
 *
 * Return: c
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmpnode;

	while (head)
	{
		tmpnode = head;
		head = head->next;
		free(tmpnode);
	}
}
