#include <unistd.h>

/**
 * _putchar - writes the char c to stdout
 * @c: the char to be printed
 * Return: on success 1
 * on error -1 is returned, and errno is set appropriatley
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
