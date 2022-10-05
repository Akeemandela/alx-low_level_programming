#include "search_algos.h"

/**
 * linear_search - linear search implementation
 * @array: string
 * @size: size_t
 * @value: value
 * Return: int, index of the value
 */

int linear_search(int *array, size_t size, int value)
{
size_t index;

if (array == NULL)
return (-1);

for (index = 0; index < size; index++)
{
printf("Value checked array[%li] = [%i]\n", index, array[index]);
if (array[index] == value)
return (index);
}
return (-1);
}
