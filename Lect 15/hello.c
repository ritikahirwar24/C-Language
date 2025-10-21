#include <stdio.h>
#include <limits.h>

// ✅ Function 1: Binary Search
int BSearch() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    int target = 11;  // number to search
    int start = 0;
    int end = 5;

    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == target) {
            return mid;  // found
        } else if (arr[mid] < target) {
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return -1;  // not found
}

// ✅ Function 2: Kadane’s Algorithm (Maximum Subarray Sum)
int maxSubarraySum() {
    int arr[6] = {0, 5, -5, 3, -4, -5};
    int maxSum = INT_MIN;
    int currSum = 0;

    for (int i = 0; i < 6; i++) {
        currSum += arr[i];
        if (currSum > maxSum)
            maxSum = currSum;

        if (currSum < 0)
            currSum = 0;
    }

    return maxSum;
}

// ✅ Function 3: Rotate array left by one position
void rotateArray() {
    int arr[5] = {10, 20, 30, 40, 50};
    int first = arr[0];

    for (int i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];
    }
    arr[4] = first;

    printf("Array after left rotation: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// ✅ Function 4: Check Palindrome Array
void checkPalindrome() {
    int arr[5] = {1, 2, 3, 2, 1};
    int isTrue = 1;

    for (int i = 0; i < 5 / 2; i++) {
        if (arr[i] != arr[5 - i - 1]) {
            isTrue = 0;
            break;
        }
    }

    if (isTrue)
        printf("Array is palindrome\n");
    else
        printf("Array is not palindrome\n");
}

// ✅ Function 5: Pointer Example
void pointerExample() {
    int a = 5;
    int *p = &a;
    *p = 100;

    printf("Value of a using pointer = %d\n", *p);
    printf("Value of a after pointer change = %d\n", a);
}

// ✅ MAIN PROGRAM with MENU
int main() {
    int choice;

    do {
        printf("\n=== MENU ===\n");
        printf("1. Rotate Array Left\n");
        printf("2. Check Palindrome Array\n");
        printf("3. Maximum Subarray Sum (Kadane’s Algorithm)\n");
        printf("4. Binary Search\n");
        printf("5. Pointer Example\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                rotateArray();
                break;

            case 2:
                checkPalindrome();
                break;

            case 3:
                printf("Maximum Subarray Sum = %d\n", maxSubarraySum());
                break;

            case 4: {
                int result = BSearch();
                if (result != -1)
                    printf("Element found at index %d\n", result);
                else
                    printf("Element not found\n");
                break;
            }

            case 5:
                pointerExample();
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
