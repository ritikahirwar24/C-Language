#include <stdio.h>

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print diagonal elements
    printf("Diagonal elements: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", arr[i][i]);
    }
    printf("\n");

    // Print sum of each column
    printf("Column sums: ");
    for (int i = 0; i < 3; i++) {
        int sum = 0;
        for (int j = 0; j < 3; j++) {
            sum += arr[j][i];
        }
        printf("%d ", sum);
    }

    return 0;
}
