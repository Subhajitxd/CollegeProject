#include<stdio.h>
int main(){
	int n, i, res;
	printf("Enter any number");
	scanf("%d", &n);
	
	if (n==0||n==1){
	
	res=1;
	}
	for (i=2;i<=n/2;)
	{
		if (n%i==0)
		res=1;
		break;
	}
	if (res==1){
		printf("It is not a prime number");
		
	}
		else{
			printf("It is a prime number");
		}
}
