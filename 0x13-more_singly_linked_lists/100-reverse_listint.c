#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 *
 * @head: Pointer to the pointer to the first node of the linked list
 *
 * Return: Pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *current = *head, *next_ptr = NULL, *prev_ptr = NULL;

	while (current != NULL)
	{
		next_ptr = current->next;
		current->next = prev_ptr;
		prev_ptr = current;
		current = next_ptr;
	}

	*head = prev_ptr;
	return (*head);
}

