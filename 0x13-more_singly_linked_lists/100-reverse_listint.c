#include "lists.h"

/**
 * reverse_listint - Reverses a linked list
 *
 * @head: Pointer to the pointer to the first node of the linked list
 *
 * Return: Pointer to the first node of the reversed linked list
 */
listint_t *reverse_listint(listint_t **head)
{
    listint_t *current = *head, *next_ptr = NULL, *prev_ptr = NULL;

    /* Traverse the list */
    while (current != NULL)
    {
        /* Store the next node */
        next_ptr = current->next;

        /* Change the next node to the previous node */
        current->next = prev_ptr;

        /* Move the previous node one position forward */
        prev_ptr = current;

        /* Move the current node one position forward */
        current = next_ptr;
    }

    /* Update the pointer to the first node */
    *head = prev_ptr;

    return (*head);
}

