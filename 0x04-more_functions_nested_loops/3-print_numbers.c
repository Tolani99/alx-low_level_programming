#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 *
 *
 * Return: 0 (Always success)
 */
void print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	putchar('\n');
}
