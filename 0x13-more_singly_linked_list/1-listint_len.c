#include "lists.h"

/**
 * listint_len - gfgdgd
 * @h: fgfdgd
 *
 * Return: fndkfghd
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
