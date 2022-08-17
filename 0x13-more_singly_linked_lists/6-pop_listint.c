#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - Deletes head node and returns the head integer.
 * @head: Double pointer to the actual position of the linked list (struct)
 *
 * Return: Header's node data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int val;

	if (*head == NULL)
		return (0);

	tmp = *head;
	val = tmp->n;
	tmp = tmp->next;
	free(*head);
	*head = tmp;

	return (val);
}
