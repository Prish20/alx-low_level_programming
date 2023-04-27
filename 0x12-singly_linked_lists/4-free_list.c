#include "lists.h"

/**
 * free_list - Frees a linked list_t list
 *
 * @head: Pointer to the head of the list to free
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}

