#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: A pointer to a pointer to the first node of the list.
 * @n: The integer to be stored in the new node.
 *
 * Return: The address of the new node, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *last_node = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{

	while (last_node->next != NULL)
		last_node = last_node->next;

	last_node->next = new_node;

	}

	return (new_node);
}

