#include <stdio.h>
#include <math.h>

int main()
{
	/*si=simple interest
	ci= compound interest
	p=principle
	r=rate of interest
	t=time(years) */
	
	double si, ci, p, r, t;
	printf("Enter Principle :");
	scanf("%lf",&p);
	printf("Enter the rate of interest :");
	scanf("%lf",&r);
	printf("Enter time:");
	scanf("%lf",&t);
	
	ci=p*pow((1+(r/100)),t);
	printf("\nCompound Interest is: %lf\n", ci);
	si=p+(p*r*t/100);
	printf("\nSimple Interest is %lf\n", si);
	
	return 0;
}
