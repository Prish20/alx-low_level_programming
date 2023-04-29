#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 *
 * @head: Double pointer to the head of the list.
 * @n: Value to be added to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_beginning = NULL;

	if (head == NULL)
		return (NULL);

	node_beginning = malloc(sizeof(listint_t));
	if (node_beginning == NULL)
		return (NULL);

	node_beginning->n = n;
	node_beginning->next = *head;
	*head = node_beginning;

	return ((listint_t *) node_beginning);
}

