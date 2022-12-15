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
		for (i = 0; i <= n; i++)
		{
			putchar('_');
		}
		putchar('\n');
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_line(0);
    print_line(2);
    print_line(10);
    print_line(-4);
    return (0);
}
