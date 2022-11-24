#include <unistd.h>

/**
 * _putchar - prints char c to stdout
 * @c: the char to print
 * Return: on successs 1
 * on error, -1 is returned amd errno is set approriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
