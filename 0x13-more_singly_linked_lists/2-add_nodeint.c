#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint - a fuction to add a node to the beggining
 *@head: head pointer
 *@n: data
 *Return: head
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	if (!head)
		return (0);

	listint_t *newnode = malloc(sizeof(listint_t));

	if (!newnode)
		return (0);

	newnode->n = n;
	newnode->next = NULL;

	newnode->next = head;
	head = newnode;

	return (head);
}
