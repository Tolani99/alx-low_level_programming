#include <stdio.h>
/**
 * main - prints all possible comibinations of single-digit numbers
 *
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int num;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
		if (num != 57)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar('\n');

	return (0);
}
