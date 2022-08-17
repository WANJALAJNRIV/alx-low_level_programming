#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - frees a list_t list.
 * @head: Pointer to the actual position of the linked list (struct)
 *
 * Return: Nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *actual_node;
	listint_t *next_node;

	actual_node = head;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		free(actual_node);
		actual_node = next_node;
	}
}
