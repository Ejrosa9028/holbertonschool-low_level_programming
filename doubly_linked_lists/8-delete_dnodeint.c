#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - elimina un nodo en una posición dada
 * @head: puntero al puntero de la cabeza de la lista
 * @index: índice del nodo a eliminar
 *
 * Return: 1 si tiene éxito, -1 si falla
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)  /*Si la lista está vacía*/
		return (-1);

	current = *head;

	/*Si se quiere eliminar la cabeza*/
	if (index == 0)
	{
		*head = current->next;  /*La cabeza de la lista ahora será el siguie nodo*/

		if (current->next != NULL)
			current->next->prev = NULL;  /*Si hay un siguiente nodo*/
							/*actualizamos su puntero prev*/

		free(current);  /*Liberamos la memoria del nodo eliminado*/
		return (1);
	}

	/*Buscar el nodo a eliminar en el medio o al final*/
	for (i = 0; current != NULL && i < index; i++)
		current = current->next;  /*Avanzamos al siguiente nodo*/

	/*Si llegamos al final de la lista sin encontrar el índice*/
	if (current == NULL)
		return (-1);

	/*Si el nodo está en medio o al final*/
	if (current->next != NULL)
		current->next->prev = current->prev;  /*Actualizamos el puntero prev*/
							/*del siguiente nodo*/

	if (current->prev != NULL)
		current->prev->next = current->next;  /*Actualizamos el puntero next*/
							/*del nodo anterior*/

	free(current);  /*Liberamos la memoria del nodo eliminado*/
	return (1);
}
