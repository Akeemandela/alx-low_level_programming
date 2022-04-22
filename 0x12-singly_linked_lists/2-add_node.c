
#include "lists.h"

/**
 * strlen - length of string
 * @s: pointer to an int value
 *
 * Return: void
 */

int _strlen(const char *s)
{
int i;
i = 0;
while (s[i] != '\0')
{
i++;
}

return (i);

}


/**
 * add_node - add new node at the beginning of the list
 * @head: pointer
 * @str: string
 * Return: number of elements in the list
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;

new_node = (struct list_s *)malloc(sizeof(struct list_s));

if (new_node == NULL)
return (NULL);

new_node->str = strdup(str);
new_node->len = _strlen(str);

new_node->next = *head;
*head = new_node;

return (*head);
}
