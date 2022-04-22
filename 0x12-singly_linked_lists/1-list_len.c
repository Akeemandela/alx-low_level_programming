
#include "lists.h"

/**
<<<<<<< HEAD
 * list_len = print and count all the elements of the list
=======
 * list_len - print and count all the elements of the list
>>>>>>> 44f8578aec919eb365d6e504dac6c92c5aac0ed5
 * @h: the head of linked list
 * Description: This function access and return the elements of a list
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
