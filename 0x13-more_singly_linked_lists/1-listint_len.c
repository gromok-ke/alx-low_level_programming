#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returmns the number of elements i a linked list
 *
 * @h: pointer to head of the linked list
 *
 * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		h = h->next;
		count++;
	}

	return (count);
}
