#include <stdio.h>
#include "lists.h"

/**
 * list_len - Devuelve el número de elementos en una lista de tipo list_t.
 * @h: Puntero al primer nodo de la lista.
 *
 * Return: El número de elementos (nodos) en la lista.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0; /* Variable para contar los nodos */

	/* Recorrer la lista hasta llegar al final (NULL) */
	while (h != NULL)
	{
		count++; /* Incrementar el contador por cada nodo */
		h = h->next; /* Avanzar al siguiente nodo */
	}

	return (count); /* Retornar el número de nodos */
}
