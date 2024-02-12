#include <stdio.h>
#include <math.h>
int main()
{
	double a,b,c,dscnt,root1,root2,real,imaginary;
	printf("Enter coefficients a,b,c");
	scanf("%lf %lf %lf", &a,&b,&c);
	dscnt=(b*b-4*a*c);
	if (dscnt>0){
		root1=(-b+sqrt(dscnt))/2*a;
		root2=(-b-sqrt(dscnt))/2*a;
		printf("root1 and root2 is %lf %lf", root1, root2);
		
	}
	else if(dscnt=0){
		root1=root2=-b/(2*a);
		printf("root1 and root2 is %lf %lf", root1, root2);
		
	}
	else{
		printf("Contains Imaginary roots");
	}
	return 0;
	
	
}
