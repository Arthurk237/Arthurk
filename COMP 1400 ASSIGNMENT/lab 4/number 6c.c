#include <stdio.h>

int main() {
   float num1; 
    float num2;
    float sum;
    float diff;
    float prod;
    float div;

    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;
    div = num1 / num2;
    printf("---------------------------------------\n");
    printf("|                                     |\n");
    printf("|%11.1f  + %6.1f = %-12.1f |\n",num1, num2, sum);
    printf("|%11.1f  - %6.1f = %-12.1f |\n",num1, num2,diff);
    printf("|%11.1f  * %6.1f = %-12.1f |\n",num1, num2,prod);
    printf("|%11.1f  / %6.1f = %-12.1f |\n",num1, num2,div);
    printf("|                                     |\n");
    printf("---------------------------------------\n");

}