#include <stdio.h>
/**
 * main - prints alphabet in lowwercase followed by a newline
 *
 *
 * Return: 0 (Always Success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		putchar(alphabet);

		alphabet += 1;
	}
	putchar('\n');

	return (0);
}
