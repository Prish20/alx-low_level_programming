#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: A pointer to the first node of the list.
 * @index: The index of the node to retrieve, starting at 0.
 *
 * Return: If the node exists - A pointer to the nth node of the list.
 *         If the node does not exist - NULL.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int t = 0;

	while (head != NULL)
	{
		if (t == index)
			return (head);
		t++;
		head = head->next;

	}

	return (NULL);

}

