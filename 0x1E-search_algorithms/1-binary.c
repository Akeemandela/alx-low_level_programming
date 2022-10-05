#include "search_algos.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * binary_search - binary search implementation
 * @array: string
 * @size: size_t
 * @value: value
 * Return: int, index of the value
 */

int binary_search(int *array, size_t size, int value)
{
size_t index;
int l_search = 0;
int r_search = size;
int mid_search;
if (array == NULL)
return (-1);

for (index = 0; l_search < r_search; i++)
{
printf("Searching in array: ");
print_array(array, l_search, r_search);
mid_search = (l_search + r_search) / 2;

if (array[mid_search] < value)
l_search = mid_search + 1;
else if (array[mid_search] > value)
r_search = mid_search -1;
else
return (mid_search);
}
return (-1);
}


/**
 * print_array - print `n` elements of an array of integers
 * @a: int array pointer to print
 * @i: int, start index
 * @j: int, end index
 * Description: Numbers must be separated by comma and space.
 * Numbers should be displayed in the same order they are stored in array.
 * You can only use _putchar to print.
 */

void print_array(int *a, int i, int j)
{

for (; i < j; i++)
{
printf("%d", a[i]);
if (i < j - 1)
printf(", ");
}
printf("\n");
}
