#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int generateRandomNumber() {
    return rand() % 2001 - 1000;
}

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n, i;
    clock_t start, end;
    double elapsed_time;

    printf("Enter the number of random integers to generate: ");
    scanf("%d", &n);

    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    srand(time(NULL)); 
    for (i = 0; i < n; i++) {
        arr[i] = generateRandomNumber();
    }

    printf("Unsorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    start = clock();

    bubbleSort(arr, n);

    end = clock();
    elapsed_time = ((double)(end - start)) / CLOCKS_PER_SEC;

    printf("Sorted Array:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("Elapsed Time: %.3f seconds\n", elapsed_time);

    free(arr);

    return 0;
}