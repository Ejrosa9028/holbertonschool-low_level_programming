#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * dlistint_len - Devuelve número de elementos en lista doblemente enlazada.
 * @h: Puntero al primer nodo de la lista.
 *
 * Return: El número de nodos en la lista.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;  /* Contador de nodos */

	while (h != NULL)  /* Mientras no lleguemos al final de la lista */
	{
		count++;  /* Incrementar el contador por cada nodo */
		h = h->next;  /* Avanzamos al siguiente nodo */
	}

	return (count);  /* Devolvemos el número total de nodos */
}

