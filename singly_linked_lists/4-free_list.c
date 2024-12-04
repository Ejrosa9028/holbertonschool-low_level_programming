#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - Frees a list_t list.
 * @head: The head of the list to be freed.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)  /* While there are nodes in the list */
	{
		temp = head;      /* Save the current node */
		head = head->next; /* Move to the next node */
		free(temp->str);   /* Free the string in the node */
		free(temp);        /* Free the node itself */
	}
}

