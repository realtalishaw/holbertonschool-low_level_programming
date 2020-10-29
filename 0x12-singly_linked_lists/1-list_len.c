#include "lists.h"

/**
 * list_len -  nfdjkfs
 * @h: fdsfs
 *
 * Return: dfsfds
 */

size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
