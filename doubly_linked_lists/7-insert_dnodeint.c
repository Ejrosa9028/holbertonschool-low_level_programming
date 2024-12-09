#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_dnodeint_at_index - inserta un nuevo nodo en la posición deseada
 * @h: puntero a la cabeza de la lista
 * @idx: índice donde insertar el nuevo nodo
 * @n: valor del nuevo nodo
 *
 * Return: dirección del nuevo nodo o NULL si falla
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;
	unsigned int i;

	if (h == NULL)
		return (NULL);
	new_node = malloc(sizeof(dlistint_t)); /* Crear el nuevo nodo */
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	if (*h == NULL && idx == 0) /*Si la lista está vacíayíndice es 0*/
	{				/*El nuevo nodo es la cabeza*/
		*h = new_node;
		return (new_node);
	}
	current = *h;
	if (idx == 0) /* Insertar al principio de la lista */
		new_node->next = current;
		current->prev = new_node;
		*h = new_node;
		return (new_node);
	for (i = 0; current != NULL && i < idx - 1; i++) /*Recorrer la lista*/
	{						/*Hasta el indice deseado*/
		current = current->next;
	}
	if (current == NULL) /*Si llegamos al final de la lista*/
	{			/*o el índice no es válid*/
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next; /*Insertar el nuevo nodo*/
	if (current->next != NULL)
		current->next->prev = new_node;
	new_node->prev = current;
	current->next = new_node;
	return (new_node);
}
