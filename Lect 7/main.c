#include <stdio.h>

// Function to count digits of a number
void countDigits(int n) {
    int count = 0;

    if (n == 0) {
        count = 1;
    } else {
        while (n > 0) {
            count++;
            n = n / 10;
        }
    }

    printf("Number of digits: %d\n", count);
}

// Function to check if a number is prime
void checkPrime(int n) {
    int isPrime = 1;

    if (n <= 1) {
        printf("%d is not a prime number.\n", n);
        return;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

// Function to generate Fibonacci series up to n terms
void fibonacci(int terms) {
    int t1 = 0, t2 = 1, next;

    printf("Fibonacci series up to %d terms:\n", terms);
    for (int i = 1; i <= terms; i++) {
        printf("%d ", t1);
        next = t1 + t2;
        t1 = t2;
        t2 = next;
    }
    printf("\n");
}

// Function to demonstrate use of continue in loop
void printOddNumbers() {
    printf("Odd numbers from 0 to 10 (using continue):\n");
    for (int i = 0; i <= 10; i++) {
        if (i % 2 == 0) {
            continue;
        }
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int n;

    // Example 1: Count digits of a number
    n = 234;
    printf("Counting digits in %d:\n", n);
    countDigits(n);

    // Example 2: Prime number check
    n = 11;
    printf("\nChecking if %d is prime:\n", n);
    checkPrime(n);

    // Example 3: Fibonacci series
    n = 6;
    printf("\nFibonacci series of %d terms:\n", n);
    fibonacci(n);

    // Example 4: Print odd numbers using continue
    printf("\n");
    printOddNumbers();

    return 0;
}
