#include <stdio.h>

int main() {
    int num1, num2;
    char op;


    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &num2);


    switch (op) {
        case '+':
            printf("Result: %d + %d = %d\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("Result: %d - %d = %d\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("Result: %d * %d = %d\n", num1, num2, num1 * num2);
            break;
        case '/':
            // Check for division by zero
            if (num2 != 0) {
                printf("Result: %d / %d = %.2f\n", num1, num2, (float)num1 / num2);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Error: Invalid operator. Please enter +, -, *, or /.\n");
            break;
    }

    return 0;
}

