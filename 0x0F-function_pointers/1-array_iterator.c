#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * int_index - return index place if comparison = true, else -1
 * @array: array
 * @size: size of elements in array
 * @cmp: pointer to func of one of the 3 in main
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int));
{
	unsigned int i;

	if (!array || !action)
		return;

	for (i=0; i < size; i++)
		action(array[i]);
}


