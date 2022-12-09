#include <stdio.h>
/**
 * main - prints all single digit numbers of base 10 startin from 0
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		printf("%d", num);
	}
	printf("\n");

	return (0);
}

