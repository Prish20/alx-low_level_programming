#include "lists.h"

/**
 * create_node - creates a new node
 * @n: value to store in new node
 *
 * Return: pointer to new node, or NULL if it fails
 */
dlistint_t *create_node(int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}
/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to head of list
 * @idx: index of the list where the new node should be added
 * @n: value to store in new node
 *
 * Return: address of new node, or NULL if it fails
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = create_node(n);
	dlistint_t *current = *h;
	unsigned int i = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
		return (new_node);
	}
	while (current != NULL && i < idx - 1)
	{
		current = current->next;
		i++;
	}
	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current->next;
	if (current->next != NULL)
	{
		current->next->prev = new_node;
	}
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
