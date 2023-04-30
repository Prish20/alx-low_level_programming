#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node_ptr, *next_ptr;

	if (h == NULL || *h == NULL)
		return (0);

	node_ptr = *h;
	*h = NULL; /* Set head to NULL */

	while (node_ptr != NULL)
	{
	count++;
	next_ptr = node_ptr->next;
	free(node_ptr);
	if (next_ptr == NULL)
		break;
	if ((void *)next_ptr <= (void *)node_ptr)
		break;
	node_ptr = next_ptr;
	}

	return (count);
}

