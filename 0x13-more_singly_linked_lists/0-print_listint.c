#include "lists.h"
#include "stdio.h"
#include "stdlib.h"

/**
 *print_listint - print list
 *Return: nodes
 *
 *@h: list
 */
size_t print_listint(const listint_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d", h->n);
		h = h->next;
		printf("\n");
	}
	return (nodes);
}
