#include <stdio.h>

int main(void) {
    float num1; 
    float num2;
    float sum;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    printf("---------------------------------------------\n");
    printf("|                                           |\n");
    printf("|   %lff + %lf = %2lf  |\n", num1, num2, sum);
    printf("|                                           |\n");
    printf("---------------------------------------------\n");

    return 0;
}