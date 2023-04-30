#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list,
 *               and returns the head node's data.
 *
 * @head: A pointer to a pointer to the head of the linked list.
 *
 * Return: The head node's data (n), or 0 if the linked list is empty.
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *current_node;

	if (head == NULL || *head == NULL)
		return (0);

	current_node = *head;
	data = current_node->n;
	free(current_node);

	return (data);
}
