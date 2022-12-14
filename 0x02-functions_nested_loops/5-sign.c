#include "main.h"
/**
 * print_sign - prints the sign of a number
 * @n: is the parameter taken in
 *
 * Return: 0 (Always success)
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		putchar(1);
	}
	else if (n == 0)
	{
		putchar(48);
		putchar(0);
	}
	else
	{
		putchar(45);
		putchar(-1);
	}

	return (0);
}
