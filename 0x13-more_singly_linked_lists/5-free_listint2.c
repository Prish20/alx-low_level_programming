#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list and sets the head to NULL.
 * @head: A pointer to a pointer to the first node of the list to be freed.
 *
 * Return: None.
 */

void free_listint2(listint_t **head)
{
	listint_t *temporary_pointer;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		temporary_pointer = *head;
		*head = (*head)->next;
		free(temporary_pointer);

	}

	*head = NULL;

}
