#include <stdio.h>

int main() {

    // ✅ Program 1: Sum of digits of a number
    int num = 2456;
    int sum = 0;

    while (num > 0) {
        int lastDigit = num % 10;  // extract last digit
        sum = sum + lastDigit;     // add it to sum
        num = num / 10;            // remove last digit
    }
    printf("Sum of digits = %d\n", sum);

    // ✅ Program 2: Print "hello" twice using while loop
    int i = 0;
    while (i < 2) {
        printf("hello\n");
        i++;
    }

    // ✅ Program 3: Print numbers from 0 to 5
    for (int j = 0; j <= 5; j++) {
        printf("%d\n", j);
    }

    // ✅ Program 4: Print odd numbers from 10 to 1
    for (int k = 10; k > 0; k--) {
        if (k % 2 == 1) {
            printf("%d\n", k);
        }
    }

    // ✅ Program 5: Find sum of numbers from 1 to 5
    int total = 0;
    for (int x = 1; x <= 5; x++) {
        total = total + x;
    }
    printf("Sum of numbers 1 to 5 = %d\n", total);

    return 0;
}