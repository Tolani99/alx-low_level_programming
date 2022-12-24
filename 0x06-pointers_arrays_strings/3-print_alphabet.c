#include <stdio.h>

/**
 * main - to print the alphabet in lowercase, and then in upparcase,e
 * followed by a newline
 *
 * Return: 0
*/
int main(void)
{
	char alphabet = 'a';
	char upper_alphabet = 'A';

	for (alphabet = 'a'; alphabet < 'z'; alphabet++)
	{
		putchar(alphabet);
	}
	for (upper_alphabet = 'A'; upper_alphabet < 'Z'; upper_alphabet++)
	{
		putchar(upper_alphabet);
	}
	putchar('\n');

	return (0);
}
