#include <stdio.h>
/**
 * main - prints all the numbers of base 16 in lowercase followed by a new ine
 *
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int num = 48;
	char alphabet = 'a';

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
	{
		putchar(alphabet);
	}
	putchar('\n');

	return (0);
}
