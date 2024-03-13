#include <stdio.h>

// Recursive function to calculate factorial of a number
int factorial(int n) {
    // Base case: 0! = 1
    if(n == 0)
        return 1;
    else
        // Recursive case: n! = n * (n-1)!
        return n * factorial(n - 1);
}

int main() {
    int num = 5;
    printf("Factorial of %d is %d", num, factorial(num));
    return 0;
}