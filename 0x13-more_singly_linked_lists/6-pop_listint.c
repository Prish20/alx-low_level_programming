#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 *               and returns its data.
 * @head: A pointer to a pointer to the first node of the list.
 *
 * Return: The data of the head node, or 0 if the list is empty.
 */

int pop_listint(listint_t **head)
{
	listint_t *temporary_pointer;
	int head_data;

	if (*head == NULL)
		return (0);

	temporary_pointer = *head;
	head_data = temporary_pointer->n;
	*head = temporary_pointer->next;
	free(temporary_pointer);

	return (head_data);

}

