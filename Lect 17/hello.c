#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
    printf("After swap inside function: x=%d y=%d\n", *x, *y);
}

// Function to calculate sum using pointers
int sum(int *a, int *b) {
    *a = 20;
    *b = 10;
    int s = (*a) + (*b);
    return s;
}

// Function to find the maximum subarray sum (Kadane's Algorithm)
int maxSubarraySum(int arr[], int n) {
    int maxSum = arr[0];
    int currSum = arr[0];
    for (int i = 1; i < n; i++) {
        if (currSum < 0)
            currSum = arr[i];
        else
            currSum += arr[i];

        if (currSum > maxSum)
            maxSum = currSum;
    }
    return maxSum;
}

int main() {
    // --- Swap example ---
    int x = 10, y = 20;
    printf("Before swap: x=%d y=%d\n", x, y);
    swap(&x, &y);
    printf("After swap in main: x=%d y=%d\n\n", x, y);

    // --- Sum using pointers ---
    int a = 5, b = 10;
    int result = sum(&a, &b);
    printf("Sum result = %d (after pointer modification: a=%d, b=%d)\n\n", result, a, b);

    // --- Array and pointers example ---
    int arr[4] = {1, 2, 3, 4};
    int *p = arr;
    printf("Array elements using pointer: ");
    for (int i = 0; i < 4; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n\n");

    // --- Maximum Subarray Sum ---
    int arr2[5] = {1, -3, 8, 4, -11};
    int maxsum = maxSubarraySum(arr2, 5);
    printf("Maximum Subarray Sum = %d\n", maxsum);

    return 0;
}
