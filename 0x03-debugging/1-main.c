<<<<<<< HEAD
#include <stdio.h>

/**
 *main - causes an indefinite loop
 *Return: 0
 */
=======
#include <stdio.h>      
\**
*main - causes an infinite loop
*Return: 0
*/
>>>>>>> df67c07143acd3d781b16ebb2c0d5a1a6df625b2

int main(void)
{
int i;
<<<<<<< HEAD
printf("infinite loop incoming :(\n");
i = 0;
/*
*while (i < 10)
*{
*putchar(i);
*}
*/
printf("Infinite loop avoided! \\o/\n");
return (0);
=======
printf("Infinite loop incoming :\n");

i = 0;

/*

 *while(i < 10)
 *{
 *putchar(i)
 *}
 */
printf("Infinite loop avoided! \\o/\n");

return 0;
>>>>>>> df67c07143acd3d781b16ebb2c0d5a1a6df625b2
}
