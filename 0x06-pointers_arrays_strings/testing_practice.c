#include <stdio.h>

int sum_of_three_num(int x, int y, int z)
{
	int addition;
	addition = x + y + z;

	return addition;
}

int main(void)
{
	int m, n, l, answer;
	printf("Enter the first num: \n");
	scanf("%d", &m);
	printf("Enter the second num: \n");
	scanf("%d", &n);
	printf("Enter the third num: \n");
	scanf("%d", &l);
	answer = sum_of_three_num(m, n, l);
	
	printf("The sum of the three numbers is: %d\n", answer);
	return 0;
}
