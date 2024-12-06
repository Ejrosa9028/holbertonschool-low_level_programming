#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Frees a list_t list.
 * @head: The head of the list to be freed.
 * @index: The head of the list to be freed.
 *
 * Return: Pointer to the node at the specified index, or NULL if it fails.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *temp = head;
	unsigned int num = 0;

	while (temp != NULL)
	{
		if (num == index)
		{
			return (temp);
		}

		temp = temp->next;

		num++;
	}

	return (NULL);
}
