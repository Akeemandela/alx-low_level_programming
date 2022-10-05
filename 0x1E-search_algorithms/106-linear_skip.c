#include "search_algos.h"

/**
 * linear_skip - searches for a value in a skip list
 *
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
skiplist_t *get;

if (list == NULL)
return (NULL);

get = list;

do {
list = get;
get = get->express;
printf("Value checked at index ");
printf("[%d] = [%d]\n", (int)get->index, get->n);
} while (get->express && get->n < value);

if (get->express == NULL)
{
list = get;
while (get->next)
get = get->next;
}

printf("Value found between indexes ");
printf("[%d] and [%d]\n", (int)list->index, (int)get->index);

while (list != get->next)
{
printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
if (list->n == value)
return (list);
list = list->next;
}

return (NULL);
}
