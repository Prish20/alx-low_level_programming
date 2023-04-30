#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: A pointer to the head node of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t count_t = 0;
	int t;
	listint_t *temp_ptr;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		t = *h - (*h)->next;
		if (t > 0)
		{
			temp_ptr = (*h)->next;
			free(*h);
			*h = temp_ptr;
			count_t++;
		}
		else
		{
			free(*h);
			*h = NULL;
			count_t++;
			break;
		}
	}

	*h = NULL;

	return (count_t);
}

