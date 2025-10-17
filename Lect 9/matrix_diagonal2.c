#include <stdio.h>

int main() {
    int n = 4;
    int num = 1;

    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            int d = row + col;
            int val = 0;

            if (d % 2 == 0) {
                for (int x = 0; x <= d; x++) {
                    int a = x;
                    int b = d - x;
                    if (a < n && b < n) val++;
                }
                num += val;
                printf("%3d ", num - val);
                num -= (val - 1);
            } else {
                for (int x = d; x >= 0; x--) {
                    int a = x;
                    int b = d - x;
                    if (a < n && b < n) val++;
                }
                num += val;
                printf("%3d ", num - val);
                num -= (val - 1);
            }
        }
        printf("\n");
    }

    return 0;
}