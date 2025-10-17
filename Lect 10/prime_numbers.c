#include <stdio.h>

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 1; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 2)
            printf("%d\n", i);
    }
    return 0;
}