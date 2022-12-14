#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints ten times the alphabet
 *
 * Return: 0 (Always success)
 */
void print_alphabet_x10(void)
{
	char alphabet = 'a';
	int i;

	for (int i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			_putchar(alphabet);
		}
	}
	_putchar('\n');
}
