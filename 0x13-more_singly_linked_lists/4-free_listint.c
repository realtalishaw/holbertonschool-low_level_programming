#include "lists.h"

/**
 * free_listint - fdsdf
 * @head: fdsd
 *
 * Return: fdsdfsd
 */

void free_listint(listint_t *head)
{
	listint_t *tmpnode;

	while (head)
	{
		tmpnode = head;
		head = head->next;
		free(tmpnode);
	}
}
