#include "main.h"
/**
 *_isalpha - Short description on a single line...
 *@c: contains values to be compared
 *Return: Always return zero
 */
int _isalpha(int c)
{
int isalpha = 0;
char cap = c;

if ((cap >= 'A' && cap <= 'Z') || (cap >= 'a' && cap <= 'z'))
{
isalpha = 1;
}
return (isalpha);
}
