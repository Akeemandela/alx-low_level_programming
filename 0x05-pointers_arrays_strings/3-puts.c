#include "main.h"
/**
 *_puts - prints a string
 *@str: A pointer to an int that will be updated
 *
 *Return: void
 */
void _puts(char *str)
{
int count;
char *app;
app = str;
for (count = 0; app[count]; app++)
{
_putchar(app[count]);
}
_putchar('\n');
}

