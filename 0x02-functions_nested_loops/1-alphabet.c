#inlcude "main.h"

/**
 * main - prints alphabet in lowercase
 *
 * Return: Always 0
 */
int main(void)
{
	char lc;

	for (lc = 'a', lc <= 'z', lc++)
		_putchar(lc);

	_putchar('\n');

	return (0);
}
