#include "main.h"
/**
* evaluate - compare
* @i: i
* @size: size
* @s: string
* @add: addition depending on whether or not n is odd or even
* Return: return value
*/
int evaluate(char *s, int i, int size, int add)
{
if (i + add == size && s[i] == s[size])
{
return (1);
}
else if (s[i] == s[size])
{
return (evaluate(s, i + 1, size - 1, add));
}
return (0);
}

/**
* _strlen_recursion - length of string
* @s: string
* Return: return length
 */

int _strlen_recursion(char *s)
{
if (!*s)
return (0);

else
return (1 + _strlen_recursion(s + 1));
}

/**
 * is_palindrome - checking for empty palindrome
 * @r: string
 * Return: return something tangible
 */

int is_palindrome(char *r)
{
int i, size, add;

i = 0;
add = 0;

size = _strlen_recursion(r);

add = (size % 2 != 0) ? 2 : 1;

return (evaluate(r, i, size - 1, add));
}

