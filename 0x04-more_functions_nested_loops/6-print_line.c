#include "main.h"
/**
 * print_line - draws a straight line
 * @n: the parameter taken
 *
 * Return: 0 (Always success)
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
