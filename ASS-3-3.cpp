#include <stdio.h>
int main()
{
	int num1, num2, num3, large;
	printf("Enter number 1:");
	scanf("%d",&num1);
	printf("Enter number 2:");
	scanf("%d",&num2);
	printf("Enter number 3:");
	scanf("%d",&num3);
	
	large=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
	printf("Large is : %d", large);
	return 0;
}
