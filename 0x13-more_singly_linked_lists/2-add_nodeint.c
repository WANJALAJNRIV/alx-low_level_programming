#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a list_t list.
 * @head: Pointer to the actual position of the linked list (struct)
 * @n: Value to include in the new node
 *
 * Return: Size of the linked_list.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;
	int val = n;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = val;
	new->next = *head;
	*head = new;

	return (*head);
}
