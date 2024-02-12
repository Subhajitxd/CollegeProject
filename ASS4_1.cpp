#include <stdio.h>

int main() {
    // Declare variables to store input numbers
    int num1, num2, num3;

    // Input three numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    printf("Enter the third number: ");
    scanf("%d", &num3);

    int max = num1;
    int min = num1;
    int middle = num1;


    if (num2 > max) {
        max = num2;
    }

    else if (num2 < min) {
        min = num2;
    }
    else {
        middle = num2;
    }

    if (num3 > max) {
        middle = max;  
        max = num3;
    }
    else if (num3 < min) {
        middle = min;  
        min = num3;
    }

    else {
        middle = num3;
    }

    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Middle value: %d\n", middle);

    return 0;
}

