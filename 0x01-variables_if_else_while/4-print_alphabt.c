#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except letter q and e
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	char alphabet;

	alphabet = 'a';
	while (alphabet <= 'z')
	{
		if (alphabet != 'q' && alphabet != 'e')
		{
			putchar(alphabet);
		}
		alphabet++;
	}
	putchar('\n');

	return (0);
}

