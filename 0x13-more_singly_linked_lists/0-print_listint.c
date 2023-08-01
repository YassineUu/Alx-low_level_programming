#include "lists.h"

/**
 * print_listint - a function that prints all elements of a list
 * @h: pointer
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t nodeC = 1;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodeC++;
	}

	printf("%d\n", h->n);

	return (nodeC);
}
