#include <stdio.h>
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
		putchar(alphabet);
		alphabet++;
	}

	putchar('\n');
}
/**
 * main - prints the main code
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
