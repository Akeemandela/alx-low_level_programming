#include "main.h"
<<<<<<< HEAD

/**
 *largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *Return: largest number
*/

int largest_number(int a, int b, int c)
{
if (c >= b)
    {
if (c >= a)
{
return (c);
}
else
{
return (a);
}
}
else
{
if (b >= a)
{
return (b);
}
else
{
return (a);
}
}
=======
/**
 *largest_number - return the largest of 3 numbers
 *@a:first integer
 *@b:second integer
 *@c:third integer
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
       
>>>>>>> df67c07143acd3d781b16ebb2c0d5a1a6df625b2
