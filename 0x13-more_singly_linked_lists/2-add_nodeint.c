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
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->next = *head;
	*head = temp;
	return (temp);
}
