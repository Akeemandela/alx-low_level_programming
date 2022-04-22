#ifndef SINGLY_LINKED_LISTS
#define SINGLY_LINKED_LISTS


#include <stdio.h>
#include <stdlib.h>
#include <sttring.h>

/**
 * struct list_s -  linked list
 * @str: string
 * @len: length of the declared string
 * @next: pointer pointing to the next node
 * Description: linked list data structure
 */

typedef struct list_s
{
char *str;
unsigned int len;
struct list_s *next;
}list_t;

size_t print_list(const list_t *h);

size_t list_len(const list_t *h);

list_t *add_node(list_t **head, const char *str);

list_t *add_node_end(list_t **head, const char *str);

void free_list(list_t *head);



/*Helper functions*/

char *strdup(const char *s);

int _strlen(const char *s);



#endif

