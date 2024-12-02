#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list.
 * @h: Pointer to the head of the list_t list.
 *
 * Return: The number of nodes in the list.
 *
 * Description: This function iterates through each of the singly linked list.
 *              It prints the length string in the node and the string itself.
 *              If the string is NULL, it prints [0] (nil).
 */
size_t print_list(const list_t *h)
{
	size_t count = 0; /*Contar para hacer  un seguimiento del número de nodos.*/

	/*Recorrer la lista hasta llegar al final (NULL)*/
	while (h != NULL)
	{
		/*Comprueba si la cadena es NULL e imprime en consecuencia*/
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		count++; /*Incrementa el contador de nodo*/
		h = h->next; /*Mueve al siguiente nodo*/
	}

	return (count); /*returna el numero de nodos*/
}
