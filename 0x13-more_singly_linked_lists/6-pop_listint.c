#include "lists.h"

/**
 * pop_listint - deletes head of the node
 * @head: pointer
 * Return: the head's node's data (n)
 */

int pop_listint(listint_t **head)
{
	int nodeF;
	listint_t *tmp, *next;

	if (*head == NULL)
		return (0);

	tmp = *head;
	next = tmp->next;
	nodeF = tmp->n;

	free(tmp);

	*head = next;

	return (nodeF);
}
