#include "lists.h"

/**
* add_nodeint_end - fjgdf
* @head: fgdfgsd
* @n: fjkljsdfd
*
* Return: dfsfdsf
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *tmpnode;

	newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->next = NULL;

	if (!*head)
		*head = newnode;

	else
	{
		tmpnode = *head;
		while (tmpnode->next)
			tmpnode = tmpnode->next;

		tmpnode->next = newnode;
	}
	return (newnode);
}
