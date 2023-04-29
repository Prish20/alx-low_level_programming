#include "lists.h"

/**
 * delete_nodeint_at_index - deletes and
 * the node at index of a listint_t linked list.
 * @head: pointer to a pointer to the first node of the list
 * @index: index of the node to delete, starting from 0
 *
 * Return: 1 on success, -1 on failure
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node, *previous_pointer;
	unsigned int t = 0;

    /* Check if list is empty */
	if (*head == NULL)
	{
		return (-1);
	}

    /* Initialize current and previous nodes */
	current_node = *head;
	previous_pointer = NULL;

    /* Traverse the list until current node is the one to delete */
	while (current_node != NULL && t < index)
	{
		previous_pointer = current_node;
		current_node = current_node->next;
		t++;
	}

    /* Check if index is valid */
	if (t != index)
	{
		return (-1);
	}

    /* If the node to delete is the first node */
	if (previous_pointer == NULL)
	{
		*head = current_node->next;
	}
	else
	{
    /* Update the previous node's pointer to skip over the node to delete */
		previous_pointer->next = current_node->next;
	}
    /* Free the memory allocated to the node to delete */
	free(current_node);
	return (1);
}

