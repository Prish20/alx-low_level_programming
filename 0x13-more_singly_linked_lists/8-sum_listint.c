#include "lists.h"

/**
 * sum_listint - Returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: A pointer to the first node of the list.
 *
 * Return: The sum of all the data (n) in the list.
 */

int sum_listint(listint_t *head)
{
	int cal_sum = 0;

	while (head != NULL)
	{
		cal_sum += head->n;
		head = head->next;

	}

	return (cal_sum);

}

