#include "lists.h"

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_ptr = head, *temp2_ptr;
	size_t count_n = 0;

	while (temp_ptr != NULL)
	{
		count_n++;
		printf("[%p] %d\n", (void *)temp_ptr, temp_ptr->n);
		temp2_ptr = temp_ptr;
		temp_ptr = temp_ptr->next;
		if (temp2_ptr <= temp_ptr)
		{
			printf("-> [%p] %d\n", (void *)temp_ptr, temp_ptr->n);
			exit(98);
		}
	}

	return (count_n);
}

