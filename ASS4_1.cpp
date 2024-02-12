#include <stdio.h>

int main() {

    int num1, num2, num3;
	printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    printf("Enter the third number: ");
    scanf("%d", &num3);
    int max = num1;
    int min = num1;
    if (num2 > max) {
        max = num2;
    }
    else if (num2 < min) {
        min = num2;
    }
    if (num3 > max) {
        max = num3;
    }
    else if (num3 < min) {
        min = num3;
    }
    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    return 0;
}

