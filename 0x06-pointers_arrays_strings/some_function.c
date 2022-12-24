#include <stdio.h>
/**
 * some_function - prints out some some values
 *
 * Return: 0 (Always success)
 */
int some_function(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	return (i);
}
/**
 * main - calls some_function
 *
 * Return: 0 (Always success)
 */
int main(void)
{
	some_function();
	printf("\n");
	
	return (0);
}
