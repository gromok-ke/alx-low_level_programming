#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - eletes the node at index
 * index of a listint_t linked list.
 *
 * @head: pointer to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 if Success, or -1 if Fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *previous = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		listint_t *temp = *head;
		*head = (*head)->next;
		free(temp);

		return (1);
	}

	while (current != NULL && i < index)
	{
		previous = current;
		current = current->next;
		i++;
	}

	if (current == NULL)
		return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
