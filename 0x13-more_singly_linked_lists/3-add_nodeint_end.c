#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *add_nodeint_end - function that add a new node to the end
 *                   of a singly linked list
 *@head: the head of the linked list
 *@n: integer n
 *Return: node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *last;

	if (!head)
		return (0);

	node = malloc(sizeof(listint_t));
	if (!node)
		return (0);
	node->n = n;
	node->next = 0;

	last = *head;
	if (!last)
	{
		*head = node;
		return (node);
	}

	while (last->next)
		last = last->next;
	last->next = node;
	return (node);
}

