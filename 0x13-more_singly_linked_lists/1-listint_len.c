#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: Pointer to the head of the list.
 *
 * Return: The number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	const listint_t *new_ptr = NULL;
	size_t count = 0;

	if (h == NULL)
		return (0);

	new_ptr = h;

	while (new_ptr != NULL)

	{
		count++;
		new_ptr = new_ptr->next;
	}

	return (count);

}

