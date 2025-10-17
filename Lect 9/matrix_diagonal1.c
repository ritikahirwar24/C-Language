#include <stdio.h>

int main() {
    int n = 4;
    int arr[n][n];
    int num = 1;

    // Fill diagonal-wise
    for (int d = 0; d < 2 * n - 1; d++) {
        if (d % 2 == 0) {
            // Even diagonal → top to bottom
            for (int i = 0; i <= d; i++) {
                int j = d - i;
                if (i < n && j < n) {
                    arr[i][j] = num++;
                }
            }
        } else {
            // Odd diagonal → bottom to top
            for (int i = d; i >= 0; i--) {
                int j = d - i;
                if (i < n && j < n) {
                    arr[i][j] = num++;
                }
            }
        }
    }

    // Print matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}