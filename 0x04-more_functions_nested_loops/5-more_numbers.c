#include "main.h"
/**
 * more_numbers - prints 10 times the numbers from 0 to 14
 *
 * Return: 0 (Always success)
 */
void more_numbers(void)
{
	int i, j;

	for (j = 1; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				putchar((i / 10) + '0');
			}
			putchar((i % 10) + '0');
		}
		putchar('\n');
	}
}
