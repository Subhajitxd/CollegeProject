#include <stdio.h>
int main()
{
	int y;
	printf("Enter year \n");
	scanf("%d",&y);
	if (y%400==0){
		printf("It is a leap year");
		
	}
	if (y%400!=0){
		if (y%100==0){
			printf("It is not a leap year");
		}
		if (y%100!=0){
			if (y%4==0){
				printf("It is a leap year");
				
			}
			if (y%4!=0){
				printf("It is not a leap year");
			}
		}
	}
	return 0;
	}

