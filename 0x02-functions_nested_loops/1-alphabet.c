#include "main.h"
/**
 *print_alphabet -print alphabet lower case
 *
 *Return: 0
 */
int print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
}
_putchar('\n');
return (0);
}
