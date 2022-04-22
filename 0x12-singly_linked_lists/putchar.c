#include "lists.h"

#include <unistd.h>



/**
 * _putchar - writes the character c to the ouput stream
 * @c: the char to be printed
 *
 * Return: On success 1;
 * On error -1 is returned
 */

int _putchar(char c)

{

return (write(1, &c, 1));

}
