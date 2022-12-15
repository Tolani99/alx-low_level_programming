#include "main.h"
/**
 * _isupper - checks for uppercase character
 * @c: is parameter to be checked
 *
 *
 * Return: 0 (Always success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}

	putchar('\n');
}
