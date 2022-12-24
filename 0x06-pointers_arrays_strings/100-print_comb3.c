#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	int num1, num2, num3, num4;

	num1 = 48, num2 = 49, num3 = 50;
	for (num1 = 48; num1 < 58; num1++)
	{
		for (num2 = 48; num2 < 58; num2++)
		{
			for (num3 = 48; num3 < 58; num3++)
			{
				for (num4 = 49; num4 < 58; num4++)
				{
					putchar(num1);
					putchar(num2);
					putchar(32);
					putchar(num3);
					putchar(num4);
					if (num1 != 57 && num2 != 56)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
