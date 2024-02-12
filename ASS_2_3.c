#include <stdio.h>
int main(){
	int a, b, c;
	//Taking Inputs
	printf("Enter the value of A \n");
	scanf("%d",&a);
	printf("Enter the value of B \n");
	scanf("%d",&b);
	//swapping the values
	c=a;
	a=b;
	b=c;
	//Printing
	printf("After swapping value of A is %d\n", a);
	printf("After swapping value of B is %d\n", b);
	
	return 0;
	
}

