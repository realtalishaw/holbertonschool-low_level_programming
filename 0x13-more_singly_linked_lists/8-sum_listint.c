#include "lists.h"

/**
 * sum_listint - gfdgd
 * @head: fdgdfgdf
 *
 * Return: fjdlkjdgg
 */

int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (!head)
		return (0);

	tmp = head;
	sum = 0;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
