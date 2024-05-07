#include <stdio.h>

int main() {
    int N;
    float sum;
    float average;

    do {
        printf("Enter an integer between 1 and 1000: ");
        scanf("%d", &N);
    } while (N < 1 || N > 1000);

    sum = N * (N + 1) / 2;

    average = sum / N;

    printf("The sum of all numbers up to %d is: %.lf\n", N, sum);
    printf("The average of all numbers up to %d is: %.2lf\n", N, average);

    return 0;
}
