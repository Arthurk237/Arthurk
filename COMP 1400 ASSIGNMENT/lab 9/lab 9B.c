#include <stdio.h>

long long factorial(int n);

int main() {
    int number;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    long long result = factorial(number);

    printf("%d! = %lld\n", number, result);

    return 0;
}

// Function to calculate factorial of a number
long long factorial(int n) {
    // Base case: factorial of 0 is 1
    if (n == 0)
        return 1;

    // Initialize the factorial result to 1
    long long fact = 1;

    // Multiply numbers from 1 to n to calculate factorial
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }

    return fact;
}
