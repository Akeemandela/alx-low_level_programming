
#include "main.h"
/**
 *largest_number - return the largest of 3 numbers
 *@a:first integer
 *@b:second integer
 *@c:third integer
 *Description: the function finds the largest of three numbers
 *Return: largest number
 */
int main(void)
{
int largest_number(int a, int b, int c)
{
int largest;
if (a > b && a > c)
{
largest = a;
}
else if (b > a && b > c)
{
largest = b;
}
else if (c > a && c > b)
{
largest = c;
}
return (largest);
}
}
