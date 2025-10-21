#include <stdio.h>

int main() {
    // Pattern printing: 
    // * * * *
    //  * * * 
    //   * * 
    //    * 
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < i; j++) {
            printf(" "); // spaces
        }
        for (int k = 4; k > i; k--) {
            printf("* ");
        }
        printf("\n");
    }

    // Bubble sort example
    int arr[5] = {1, 4, 5, 65, 3};
    int n = sizeof(arr) / sizeof(int);

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
