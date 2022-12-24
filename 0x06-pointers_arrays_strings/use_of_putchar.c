#include <stdio.h>
int main(void)
{
	
	//putchar(89);
	//putchar(10);
	//char ch = 'A';
	//printf("The numeric format of A is: %d, and it's character format is %c. Also it's hexadecial foramt is %x\n", ch, ch, ch);
	float num1= 232.2343234;
	int num2 = 3243;
	printf("%d\n", num2);
	printf("%2.9d\n", num2);
	
	printf("%-9.4f\n", num1);
	printf("%-8.3f\n", num1);
	printf("%-7.2f\n", num1);

	return 0;
}
