#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 * @head: pointer
 * Return:
 */
void free_listint2(listint_t **head)
{
	listint_t *current, *tmp;

	if (head != NULL)
	{
		current = *head;


		while ((tmp = current) != NULL)
		{
			current = current->next;
			free(tmp);
		}
		*head = NULL;
	}
}
