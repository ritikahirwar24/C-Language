#include <stdio.h>

int main() {
        int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int rows = 3, cols = 3;

    // Reverse each row
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            int temp = arr[i][j];
            arr[i][j] = arr[i][cols - 1 - j];
            arr[i][cols - 1 - j] = temp;
        }
    }

    // Print result
    printf("Reversed 2D Array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

