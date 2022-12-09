#include <stdio.h>
/**
 * main - prints the alphabets in lowercase, and then in uppercase
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	char lower, upper;

	lower = 'a';
	upper = 'A';
	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);

	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');

	return (0);
}
