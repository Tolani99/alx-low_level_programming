#include "main.h"
/**
 * _isdigit - checks for a digit
 * @c: The parameter takene
 *
 * Return: 0 (Always success)
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	putchar('\n');
}
