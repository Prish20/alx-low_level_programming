#include "lists.h"

/**
 * find_listint_loop - finds the start of a loop in a linked list
 * @head: pointer to the head node of the linked list
 *
 * Return: pointer to the node where the
 *loop starts, or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *find_loop, *temp_ptr;

	if (!head)
		return (NULL);

	for (find_loop = head, temp_ptr = head; temp_ptr && temp_ptr->next; )
	{
		find_loop = find_loop->next;
		temp_ptr = temp_ptr->next->next;

	if (find_loop == temp_ptr)
	{
		find_loop = head;
		for (; find_loop != temp_ptr; find_loop = find_loop->next)
		temp_ptr = temp_ptr->next;
		return (find_loop);
	}

}

	return (NULL);
}

