#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at
 * a given position in a listint_t linked list.
 * @head: A pointer to a pointer to the first node of the list.
 * @idx: The index where the new node should be added. Index starts at 0.
 * @n: The value to be stored in the new node.
 *
 * Return: If the function succeeds - A pointer to the new node.
 *         If the function fails - NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *insert_node, *temporary_pointer = *head;
	unsigned int t = 0;

	if (head == NULL)
		return (NULL);

	insert_node = malloc(sizeof(listint_t));
	if (insert_node == NULL)
		return (NULL);
	insert_node->n = n;

	if (idx == 0)
	{
		insert_node->next = *head;
		*head = insert_node;
		return (insert_node);
	}

	while (temporary_pointer != NULL)
	{
		if (t == idx - 1)

		{
			insert_node->next = temporary_pointer->next;
			temporary_pointer->next = insert_node;
			return (insert_node);
		}

		t++;
		temporary_pointer = temporary_pointer->next;

	}

	free(insert_node);
	return (NULL);

}

