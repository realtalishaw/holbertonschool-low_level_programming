#include "lists.h"

/**
 * get_nodeint_at_index - this is just too long like wtf?
 * @head: gjfdfgd
 * @index: fsfdg
 *
 * Return: fkjdkljd
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	tmp = head;

	for (i = 0; i < index && tmp != NULL; i++)
		tmp = tmp->next;

	if (i != index)
		return (NULL);

	return (tmp);
}
