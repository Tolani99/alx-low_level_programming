/**
 * main - change a temperature in Fahrenheit to Celsius
 *
 * Description
 *
 *
 * Return: 0(Always success)
 */
#include <stdio.h>
#define CONVERSION_FACTOR (100.0/180.0)
int main(void)
{
	float cel;
	float fah;

	printf("Enter the temperature in Fahrenheit: ");
	scanf("%f", &fah);

	cel = CONVERSION_FACTOR * (fah-32);

	printf("Fahrenheit temperature is: %5.1f\n", fah);
	printf("Celsius temperature is: %5.1f\n", cel);

	return 0;
}
