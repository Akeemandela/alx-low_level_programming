#include "main.h"
/**
 *_strlen - length of a string
 *@s: A pointer to an int that will be updated
 *
 *Return: void
 */
int _strlen(char *s)
{
int count = 0;
while (s[count] != '\0')
{
count++;
}
return (count);
}
