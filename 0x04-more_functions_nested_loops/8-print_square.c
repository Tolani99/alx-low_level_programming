#include "main.h"
/**
 * print_square - function that prints a square
 * @size: takes in input
 *
 * Return: 0 (Always success)
 */
void print_square(int size)
{
	int i, j;
	
	for (i = 0; i < size; i++)
	{
		for (j= 0; j < size; j++)
		{
			putchar('#');
		}
		putchar('\n');
	}
}
