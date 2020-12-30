#include "lists.h"

/**
 * sum_dlistint - i don't wanna wait
 * @head: for my life to be over
 *
 * Return: Dawson's Creek
 */

int sum_dlistint(dlistint_t *head)
{
	int sum;
	dlistint_t *tmp;

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
