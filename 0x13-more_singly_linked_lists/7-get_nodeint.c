#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: first node in the linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node we are looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x = 0;
	listint_t *tmp = head;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp ? tmp : NULL);
}
