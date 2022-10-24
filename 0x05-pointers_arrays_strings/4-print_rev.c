#include "main.h"
/**
 * pritn_rev - prints string in reverse order
 * @s: string to print
 */
void prin_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar ('\n');
}
