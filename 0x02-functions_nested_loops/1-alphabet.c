#include "main.h"
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 *
 * Return: 0 (Always success)
 */
void print_alphabet(void)
{
	char alphabet = 'a';

	while (alphabet <= 'z')
	{
		_putchar(alphabet);
		alphabet++;
	}

	_putchar('\n');
}
