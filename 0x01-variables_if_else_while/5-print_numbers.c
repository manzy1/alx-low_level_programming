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
		printf("%d", num);

	printf("\n");

	return (0);
}
