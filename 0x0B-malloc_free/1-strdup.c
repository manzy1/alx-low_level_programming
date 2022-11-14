#include "main.h"
#include <stdlib.h>

/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer to the string to copy
 * Return: pointer to new allocated string
 */
char *_strdup(char *str)
{
	char *ptr = str;
	int count = 0;

	if (str == NULL)
		return (NULL);

	while (*ptr++ != '\0')
		count = count + 1;

	ptr = malloc((count + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	count = 0;
	while (*str)
		ptr[count++] = *str++;

	ptr[count] = *str;

	return (ptr);
}
