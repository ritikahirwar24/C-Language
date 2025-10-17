#include <stdio.h>

int main() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf("*");
        }
        for (int k = 4; k > i; k--) {
            printf(" ");
        }
        for (int p = 4; p > i; p--) {
            printf(" ");
        }
        for (int r = 0; r <= i; r++) {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j <= i; j++) {
            printf(" ");
        }
        for (int k = 3; k > i; k--) {
            printf("*");
        }
        for (int p = 3; p >= i; p--) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}