#include "main.h"
/**
 *print_sign - prints the sign of a number
 *@n: contain values to be compared
 *Return: varies depending on c
 */
int print_sign(int n)
{
int print_sign = -1;
if (n > 0)
{
print_sign = 1;
_putchar('+');
}
else if (n == 0)
{
print_sign = 0;
_putchar('0');
}
else
{
_putchar('-');
}
return (print_sign);
}
