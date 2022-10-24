#ifndef LISTS_H_
#define LISTS_H_
#include <stddef.h>

/**
 * struct list_s - the singly linked list
 * @str: string
 * @len: length of string
 * @next: the next node
 *
 */

typedef struct list_s
{
	char *str;
	int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);

#endif
