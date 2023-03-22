#include "function_pointers.h"
#include <stdio.h>

/**
* int_index - function that searches for an integer
* @array : elemt of array
* @size : number of elements in the array
* @cmp : pointer to function
* Return: -1 if no element matches || -1 if size <= 0
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int v = 0;

	if (array == NULL || cmp == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (i = 0 ; i < size ; i++)
	{
		v = cmp(array[i]);

		if (v != 0)
			return (i);
	}

	if (size == i)
		return (-1);

	return (-1);
}
