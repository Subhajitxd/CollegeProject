#include <stdio.h>
int main() {
	int a;
	float b;
	char c;
	double d;
	//input
	printf("Enter an intger number");
	scanf("%d",&a);
	printf("Enter a decimal number");
	scanf("%f",&b);
	printf("Enter a character");
	scanf(" %c",&c);
	printf("Enter a double value");
	scanf(" %lf",&d);
	//printing of values
	printf("Interger value is %d\n", a);
	printf("Decimal value is %f\n", b);
	printf("charater is %c\n", c);
	printf("Double value is %lf\n", d);
	//address value
	printf("Address value of integer %u\n", a);
	printf("Address value of decimal %u\n", b);
	printf("Address value of character %u\n", c);
	printf("Address value of double %u\n", d);
	//address size
	printf("Address size of integer %d\n",sizeof(a));
	printf("Address size of decimal %d\n",sizeof(b));
	printf("Address size of character %d\n",sizeof(c));
	printf("Address size of double %d\n",sizeof(d));
	return 0;
	
}
