#include "lists.h"

/**
 * add_dnodeint - fjjfskld
 * @head: fjklsjs
 * @n: fkdls
 *
 * Return: lkdsds
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));

	if (!newnode)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;

	if (!*head)
	{
		newnode->next = NULL;
		*head = newnode;
	}
	else
	{
		newnode->next = *head;
		(*head)->prev = newnode;
		*head = newnode;
	}

	return (newnode);
}
