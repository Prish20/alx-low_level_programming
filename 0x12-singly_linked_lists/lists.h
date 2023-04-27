#ifndef LISTS_H
#define LISTS_H
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/*
* Declares a function called "print_list"
* takes a pointer to a constant structure of type "list_t" as its argument
* and returns a value of type "size_t".
*/
size_t print_list(const list_t *h);

/*
* Declares a function called "list_len"
* It takes  a pointer to a constant structure of type "list_t" as its argument
* and returns a value of type "size_t".
*/
size_t list_len(const list_t *h);

/*
* A  function that takes a double pointer to a structure of type "list_t"
* and a pointer to a constant character array (i.e., a string) as arguments,
and returns a pointer to a structure of type "list_t".
*/
list_t *add_node(list_t **head, const char *str);

/*
* A function that takes a double pointer to a structure of type "list_t"
* and a pointer to a constant character array (i.e., a string) as arguments,
 and returns a pointer to a structure of type "list_t"
*/
list_t *add_node_end(list_t **head, const char *str);

/*
*Declares a function that takes a pointer to a structure of type "list_t"
* as its argument, and does not return anything
*/
void free_list(list_t *head);
#endif
