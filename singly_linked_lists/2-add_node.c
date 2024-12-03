#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - Agrega un nuevo nodo al principio de una lista_t.
 * @head: Doble puntero a la cabeza de la lista.
 * @str: La cadena de caracteres que se almacenará en el nuevo nodo.
 *
 * Return: Dirección del nuevo nodo, o NULL si falló la operación.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;  /* Puntero para el nuevo nodo */

	/* Verificar si la cadena 'str' es NULL */
	if (str == NULL)
	{
		return (NULL);
	}

	/* Crear el nuevo nodo */
	new_node = malloc(sizeof(list_t));

	if (new_node == NULL) /* Verificar si malloc falló */
	{
		return (NULL);
	}

	/* Asignar los valores al nuevo nodo */
	new_node->str = strdup(str);  /* Duplicar la cadena */
	if (new_node->str == NULL)     /* Verificar si strdup falló */
	{
		free(new_node);  /* Liberar el nodo si strdup falla */
		return (NULL);
	}

	new_node->len = strlen(str);  /* Asignar la longitud de la cadena */
	new_node->next = *head;       /* Apuntar al nodo anterior(el antiguo cabeza)*/

	*head = new_node;             /* Actualizar la cabeza de la lista */

	return (new_node);  /* Devolver la dirección del nuevo nodo */
}
