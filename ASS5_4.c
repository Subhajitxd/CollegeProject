#include <stdio.h>
#include <math.h>

int main() 
{ 
	int n = 5; 
	int i; 
	int sums = 0; 
	for (i = 1; i <= n; i++) {
	sums += (int)pow(i, i); 
	}

    // Display the result
    printf("The result of the function %d\n", sums);

    return 0;
}

