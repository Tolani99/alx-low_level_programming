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

	for (i = 0; i <= n; i++)
	{
		if (i <= 0)
		{
			putchar(' ');
		}
		else
		{
			putchar('_');
		}
	}
	putchar('\n');
}
