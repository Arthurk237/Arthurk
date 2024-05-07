#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Enter three integer values separated by spaces: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    int largest = num1;
    int smallest = num1;

    if (num2 > largest) {
        largest = num2;
    } else if (num2 < smallest) {
        smallest = num2;
    }

    if (num3 > largest) {
        largest = num3;
    } else if (num3 < smallest) {
        smallest = num3;
    }

    // Display the largest and smallest numbers
    printf("Largest number: %d\n", largest);
    printf("Smallest number: %d\n", smallest);

    return 0;
}