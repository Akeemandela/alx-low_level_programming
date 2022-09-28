#include "main.h"
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

