#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the first node of the list to be freed.
 *
 * Return: None.
 */

void free_listint(listint_t *head)
{
	listint_t *temporary_pointer;

	while (head != NULL)
	{
		temporary_pointer = head;
		head = head->next;

		free(temporary_pointer);
	}

}

