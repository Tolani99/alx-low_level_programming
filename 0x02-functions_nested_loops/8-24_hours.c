#include "main.h"
/**
 * jack_bauer - func that prints every minute of the day of Jack Bauer, starti
 * n from 00:00 to 23:59, min loop counts mins, while hour loop counts hours
 * and resets mins
 * Return: 0
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;
	int hours_remainder;
	int mins_remainder;

	while (hours <= 23)
	{
	while (minutes <= 59)
	{
	mins_remainder = minutes % 10;
	hours_remainder = hours % 10;
	putchar(hours / 10 + '0');
	putchar(hours_remainder + '0');
	putchar(':');
	putchar(minutes / 10 + '0');
	putchar(mins_remainder + '0');
	minutes++;
	putchar('\n');
	}
	hours++;
	minutes = 0;
}
}
