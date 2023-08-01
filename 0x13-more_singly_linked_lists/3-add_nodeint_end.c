#include "lists.h"

/**
 * add_nodeint_end - a function that adds a new node at the end of the node
 * @head: pointer to the first node of the list
 * @n: element int to add to new node
 * Return: address of the new node or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	tmp = *head;

	if (tmp == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new_node;
	}

	return (*head);
}
