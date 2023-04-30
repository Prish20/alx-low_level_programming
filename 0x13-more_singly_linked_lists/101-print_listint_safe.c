#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _r - adds a node to a listint_t list.
 * @list: pointer to the list.
 * @size: size of the list.
 * @new: new node to add.
 *
 * Return: A pointer to the updated list.
 */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	const listint_t **newlist;
	size_t t;

	newlist = malloc(size * sizeof(listint_t *));
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	for (t = 0; t < size - 1; t++)
		newlist[t] = list[t];
	newlist[t] = new;
	free(list);
	return (newlist);
}

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head of the list.
 *
 * Return: The number of nodes in the list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t t, num = 0;
	const listint_t **list = NULL;

	while (head != NULL)
	{
		for (t = 0; t < num; t++)
			if (head == list[t])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (num);
			}

		num++;
		list = _r(list, num, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}

	free(list);
	return (num);
}

