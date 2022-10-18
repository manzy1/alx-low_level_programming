#include <stdio.h>

/**
 * main - prints single digit numbers
 *
 * Return: ALways 0
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		putchar((num % 9) + '0');

	putchar('\n');

	return (0);
}
