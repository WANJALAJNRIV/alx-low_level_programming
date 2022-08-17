#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -frees a list_t list.
 * @head: Double pointer to the actual position of the linked list (struct)
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{
	listint_t *actual_node;
	listint_t *next_node;

	actual_node = *head;

	while (actual_node != NULL)
	{
		next_node = actual_node->next;
		actual_node->next = NULL;
		free(actual_node);
		actual_node = next_node;
	}
	*head = NULL;

}
