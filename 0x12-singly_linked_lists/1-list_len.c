
#include "lists.h"

/**
 * list_len - print and count all the elements of the list
 * @h: the head of linked list
 * Return: numbers of members of a list
 */


size_t list_len(const list_t *h)		
{
size_t counter = 0;

while (h != NULL)

{

h = h->next;
										counter++;
										}

return (counter);

}
