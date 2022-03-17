#include "main.h"
/**
 *_islower - Short description, on a single line
 *@c: contains values to be compared
 *Return: Always return zero
 */

int _islower(int c)
{
int islower = 0;
char contain_value = c;
if (contain_value >= 'a' && contain_value <= 'z')
{
islower = 1;
}
return (islower);
}
