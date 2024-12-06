#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint - Agrega nuevo nodo al principio de lista doblemente enlazada.
 * @head: Doble puntero al primer nodo de la lista.
 * @n: El valor que se almacenará en el nuevo nodo.
 *
 * Return: La dirección del nuevo nodo, o NULL si hubo un error.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	/*Crear un nuevo nodo*/
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)	/*Verificar si malloc falló*/
	{
		return (NULL);
	}

	new_node->n = n;  /*Asignar el valor al nuevo nodo*/
	new_node->prev = NULL;  /*El new nodo será la head, porque su prev es NULL*/
	new_node->next = *head;  /*El next del new nodo será el actual primer nodo*/

	/*Si la lista no está vacía, ajustar el punt rev del antiguo primer nodo*/
	if (*head != NULL)
	{
		(*head)->prev = new_node;
	}

	*head = new_node;  /*Actualizar la head de lista para que apunte al new nodo*/

	return (new_node);  /*`Devolver la dirección del nuevo nodo*/
}

