#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_dnodeint_end - Agrega un new nodo al final de lista doblemente enlazada.
 * @head: Un puntero doble a la cabeza de la lista.
 * @n: El valor entero que se almacenará en el nuevo nodo.
 *
 * Return: La dirección del nuevo nodo, o NULL si falla.
 *
 * Descripción:
 * Esta función crea un nuevo nodo y lo agrega al final de la lista doblemente
 * enlazada. Si la list está vacía, new nodo se pone en head de la lista.
 * La función actualiza correctamente punteros `prev` y `next` de los nodos
 * para mantener la estructura de lista doblemente enlazada.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *last_node;

	/* Asignar memoria para el nuevo nodo */
	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	/* Inicializar el nuevo nodo */
	new_node->n = n;
	new_node->next = NULL;  /* El nuevo nodo será el último nodo */
	new_node->prev = NULL;  /* El puntero prev se actualizará después */

	/* Si la lista está vacía, el nuevo nodo se convierte en la cabeza */
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	/* Recorrer la lista hasta llegar al último nodo */
	last_node = *head;
	while (last_node->next != NULL)
		last_node = last_node->next;

	/* Actualizar el puntero next del último nodo para que apunte al new nodo */
	last_node->next = new_node;

	/* Actualizar el puntero prev del new nodo para que apunte al último nodo */
	new_node->prev = last_node;

	/* Retornar la dirección del nuevo nodo */
	return (new_node);
}
