#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count_n = 0;
	const listint_t *temp_ptr;

	if (head == NULL || head->next == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count_n++;

		temp_ptr = head;
		head = head->next;

		if (temp_ptr <= head)
		{
			printf("-> [%p] %d\n", (void *)head, head->n);
			break;

		}

	}

	return (count_n);
}

