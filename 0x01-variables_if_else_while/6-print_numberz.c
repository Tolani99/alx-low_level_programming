#include <stdio.h>
/**
 * main - writes a program that prints all single digit numbers of base 10
 *
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int num;

	num = 48;
	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	putchar('\n');

	return (0);
}
