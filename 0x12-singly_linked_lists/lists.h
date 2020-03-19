#ifndef _LISTS_H_
#define _LISTS_H_

/* LIBRARIES */
#include <stdlib.h>
#include <stdio.h>

/* STRUCTURES */
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

/* ALIAS */
typedef const list_t *h;
typedef const char *str;
typedef list_t **head;

/* PROTOTYPES */
size_t print_list(h);
size_t list_len(h);
list_t *add_node(head, str);
list_t *add_node_end(head, str);
void free_list(list_t *head);

#endif /* _LISTS_H_ */
