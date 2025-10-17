#include <stdio.h>

int main() {
    int n, rev = 0, temp;
    printf("Enter a number: ");
    scanf("%d", &n);

    temp = n;
    while (n > 0) {
        int ld = n % 10;
        rev = rev * 10 + ld;
        n = n / 10;
    }

    if (temp == rev)
        printf("The number is a palindrome.\n");
    else
        printf("The number is not a palindrome.\n");

    return 0;
}