#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * print_dlistint - Imprime todos los elementos de lista doblemente enlazada.
 * @h: Puntero a la cabeza de la lista doblemente enlazada.
 *
 * Return: El número de nodos en la lista.
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;  /* Variable para contar los nodos */

	while (h != NULL)  /* Recorre la lista hasta llegar al final */
	{
		printf("%d\n", h->n);  /* Imprime el valor del nodo actual */
		count++;  /* Incrementa el contador */
		h = h->next;  /* Avanza al siguiente nodo */
	}

	return (count);  /* Devuelve el número total de nodos */
}
