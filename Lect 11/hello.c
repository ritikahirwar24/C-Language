#include <stdio.h>

// Function to check Odd or Even
void odd_even() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if (a % 2 == 0)
        printf("%d is Even\n", a);
    else
        printf("%d is Odd\n", a);
}

// Function to return sum of two numbers
int sum() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    return a + b;
}

// Function to reduce a number to single-digit sum
void single_digit_sum() {
    int n, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    while (n > 9) {
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        n = sum;
    }

    printf("Single digit sum = %d\n", n);
}

// Function to print X pattern
void print_pattern() {
    int size = 5;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || j == (size - 1 - i))
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}

// Function to print array
void print_array() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Main function with menu
int main() {
    int choice;
    do {
        printf("\n=== MENU ===\n");
        printf("1. Check Odd or Even\n");
        printf("2. Sum of Two Numbers\n");
        printf("3. Single Digit Sum (like 1234 → 1)\n");
        printf("4. Print X Pattern\n");
        printf("5. Print Array\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                odd_even();
                break;
            case 2: {
                int result = sum();
                printf("Sum = %d\n", result);
                break;
            }
            case 3:
                single_digit_sum();
                break;
            case 4:
                print_pattern();
                break;
            case 5:
                print_array();
                break;
            case 0:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice! Try again.\n");
        }
    } while (choice != 0);

    return 0;
}
