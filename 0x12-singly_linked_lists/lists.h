#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <stdarg.h>
#include <stdio.h>

typedef struct list
{
	char *str;
	int len;
	struct list *next;

} list_t;

size_t print_list(const list_t *h);


#endif
