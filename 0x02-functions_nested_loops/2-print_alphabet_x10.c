#include "main.h"
/**
 * print_alphabet_x10 - prints 10 times the alphabet in lowercase
 *
 * Return: 0 (Always success)
 */
void print_alphabet_x10(void)
{
	char alphabet;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
			putchar(alphabet);
		}
		putchar('\n');
	}
}
