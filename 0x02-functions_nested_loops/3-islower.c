#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: is the int that will use for the argument of the function
 *
 * Return: 0 (Always)
 */
int _islower(int c)
{
	int c;

	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
