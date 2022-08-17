#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given position.
 * @head: Double pointer to the actual position of the linked list (struct)
 * @index: Position of the node.
 *
 * Return: Status - 1 deleted or -1 not deleted (error).
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp = *head;
	listint_t *node_to_delete;

	if (tmp == NULL)
		return (-1);

	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	while (i < index)
	{
		tmp = tmp->next;
		if (tmp == NULL)
			return (-1);
		i++;
	}

	node_to_delete = tmp->next;
	tmp->n = tmp->next->n;
	tmp->next = tmp->next->next;

	free(node_to_delete);

	return (1);
}
