#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Option 1: Check if a number is prime
void checkPrime() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }
}

// Option 2: Find the next prime number after input
void nextPrime() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int candidate = n + 1;
    while (!isPrime(candidate)) {
        candidate++;
    }

    printf("Next prime after %d is %d\n", n, candidate);
}

// Option 3: Check if a number is a palindrome
void checkPalindrome() {
    int num, original, reversed = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num = num / 10;
    }

    if (original == reversed) {
        printf("%d is a palindrome.\n", original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
}

// Option 4: Calculate factorial of a number
void factorial() {
    int n;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return;
    }

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }

    printf("Factorial of %d is %lld\n", n, fact);
}

// Main menu
int main() {
    int choice;

    do {
        printf("\n=== Menu ===\n");
        printf("1. Check Prime\n");
        printf("2. Find Next Prime\n");
        printf("3. Check Palindrome\n");
        printf("4. Calculate Factorial\n");
        printf("5. Exit\n");
        printf("Enter your choice (1-5): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                checkPrime();
                break;
            case 2:
                nextPrime();
                break;
            case 3:
                checkPalindrome();
                break;
            case 4:
                factorial();
                break;
            case 5:
                printf("Exiting program. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please enter a number between 1 and 5.\n");
        }
    } while (choice != 5);

    return 0;
}
