#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    int size = 30;

    int array[size];

    for (int i = 0; i < size; i++) {
        array[i] = rand() % 21; 
    }

    printf("Generated array:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    int num;
    printf("Enter an integer number in the range of 0 to 20: ");
    scanf("%d", &num);

    if (num < 0 || num > 20) {
        printf("Invalid input. Number must be in the range of 0 to 20.\n");
        return 1;
    }

    int frequency = 0;
    for (int i = 0; i < size; i++) {
        if (array[i] == num) {
            frequency++;
        }
    }

    printf("Frequency of %d in the array: %d\n", num, frequency);

    return 0;
}
