#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - executes a function given as a parameter
 * @array: array
 * @size: size of elements in array
 * @pointer: pointer to function used
 * Return: 0
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
		return;

	if (action == NULL)
		return;
	
	for (i = 0; i < size; i++)
		action(array[i]);
}


