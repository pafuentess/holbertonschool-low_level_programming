#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

/**
* struct list - Struct list
*
* @str: The operator
* @len: The function associated
* @next: next position
*/


typedef struct list
{
	char *str;
	int len;
	struct list *next;

} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);
void free_list(list_t *head);


#endif
