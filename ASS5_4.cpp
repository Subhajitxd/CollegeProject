#include <stdio.h>
#include <math.h>

int main() {
    int n = 5;
    int result = 0;

    // Calculate the expression
    for (int i = 1; i <= n; ++i) {
        result += (int)pow(i, i);
    }

    // Display the result
    printf("The result of the expression is %d\n", result);

    return 0;
}

