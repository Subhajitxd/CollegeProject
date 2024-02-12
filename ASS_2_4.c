#include <stdio.h>
int main(){
	//Area of circle
	float r;
	printf("Enter the radius of a circle\n");
	scanf("%f", &r);
	float a = 3.14 * r * r;
	printf("The area of the circle is %f\n", a);
	//Perimeter of circle
	float p1 = 2 * 3.14 * r;
	printf("The perimeter of the circle is %f\n", p1);
	//Area of square
	float s;
	printf("Enter the length of a side in a square\n");
	scanf("%f", &s);
	float b = s*s;
	printf("The area of square is %f\n", b);
	//Perimeter of Square
	float p2= 4*s;
	printf("The perimeter of the square is %f\n", p2);
	//Area of rectangle
	float l, k;
	printf("Enter the length of a rectangle\n");
	scanf("%f", &l);
	printf("Enter the breadth of a rectangle\n");
	scanf("%f", &k);
	float c = l*k;
	printf("The area of the rectangle is %f\n", c);
	//Perimeter of rectangle
	float p3= 2*l+2*k;
	printf("The perimeter of the rectangle is %f\n", p3);
	
	return 0;
	
	
}
