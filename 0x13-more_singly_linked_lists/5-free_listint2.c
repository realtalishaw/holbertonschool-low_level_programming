#include "lists.h"

/**
 * free_listint2 - gdsfd
 * @head: fsfds
 *
 * Return: fdsdfs
 */

void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *t2;

	t2 = *head;
	if (head)
		return (NULL);

	while (t2 && head)
	{
		t = t2;
		t2 = t2->next;
		free(t);
	}
	*head = NULL;
}
