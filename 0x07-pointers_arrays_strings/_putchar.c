#include "main.h"
#include <unistd.h>

/**
 * _putchar - writesthe character c to std out
 * @c: the character to print
 * Return: on success 1
 * om error, -1 is returned, and errorno is set appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

