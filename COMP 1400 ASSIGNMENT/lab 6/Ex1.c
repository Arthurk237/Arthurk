#include <stdio.h>

int main() {
    int num;
    int i;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    for (i = 2; i <= num / 2; ++i) {
        if (num % i == 0) {
            printf("%d is not a prime number.\n", num);
            return 0;
        }
    }

    if (num > 1) {
        printf("%d is a prime number.\n", num);
    } else {
        printf("%d is not a prime number.\n", num);
    }

    return 0;
}

