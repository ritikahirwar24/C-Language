#include <stdio.h>

int main() {

    // 1. Right-aligned decreasing triangle of *
    printf("Pattern 1: Right-aligned decreasing triangle\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int k = 3; k > i; k--) {
            printf("*");
        }
        printf("\n");
    }

    // 2. Simple number grid
    printf("\nPattern 2: Number grid (2x2)\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 2; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }

    // 3. Diamond shape using 🙁
    printf("\nPattern 3: Diamond with 🙁 emojis\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int k = 3; k > i; k--) {
            printf("🙁");
        }
        for (int p = 3; p >= i; p--) {
            printf("🙁");
        }
        printf("\n");
    }

    return 0;
}
