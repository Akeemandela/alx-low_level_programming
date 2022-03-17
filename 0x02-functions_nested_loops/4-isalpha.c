#include "main.h"
/**
 *_isalpha - Short description on a single line...
 *@c: contains values to be compared
 *Return: Always return zero
 */
int _isalpha(int c)
{
int isalpha = 0;
char contain_value = c;

if ((contain_value >= 'A' && contain_value <= 'Z') || (contain_value >= 'a' && contain_value <= 'z'))
{
isalpha = 1;
}
return (isalpha);
}
