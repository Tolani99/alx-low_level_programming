#include <stdio.h>
/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: 0 (Always success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (char alphabet = 'a'; alphabet <= 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');
}
