#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - searches fo an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to the array
 *
 * Return: index of the first elemement for each
 * th cmp function does not return 0 or -1 if no match is found
 * or size is negative
 */
int int_index(int *array, int size, int (*cmp)(int));
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}

	return (-1);
}

