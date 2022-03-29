#include <stdio.h>
#include "main.h"
/**
 *memset - fills memory with a constant bytes.
 *@s:allocated memory -array of character
 *@b: char byte
 *@n:number of spaces to fill
 *
 *Return: pointer to memory area s
 */
char *memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;

return (s);
}
	     
