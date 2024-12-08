#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * sum_dlistint - calculates the sum of all the data (n) in a dlistint_t list.
 * @head: pointer to the head of the doubly linked list.
 *
 * Return: the sum of all the data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int resultado = 0;

	/*Recorre la lista y suma los valores de cada nodo*/
	while (head != NULL)
	{
		resultado += head->n; /*Añade el valor del nodo actual*/
		head = head->next; /*Pasar al nodo siguiente*/
	}

	return (resultado); /*Devuelve el resultado final de la suma*/
}
