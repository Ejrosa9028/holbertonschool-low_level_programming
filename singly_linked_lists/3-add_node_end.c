#include "lists.h"
#include <stdlib.h>  /* For malloc and strdup */

/**
 * add_node_end - Adds a new node at the end of a list_t list
 * @head: A pointer to the head of the list
 * @str: The string to store in the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = (list_t *)malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = 0;
	while (str[new_node->len] != '\0')
	{
		new_node->len++;
	}

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = new_node;
	}

	return (new_node);
}
