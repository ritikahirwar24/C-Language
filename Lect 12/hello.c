#include <stdio.h>

int main() {
    int arr[5] = {3, 12, 52, 34, 5};
    int choice, target, found, sum, max;

    do {
        printf("\n=== ARRAY MENU ===\n");
        printf("1. Print Array\n");
        printf("2. Find Maximum\n");
        printf("3. Find Sum of Elements\n");
        printf("4. Search Element\n");
        printf("5. Print Array in Reverse\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Array elements: ");
                for (int i = 0; i < 5; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;

            case 2:
                max = arr[0];
                for (int i = 1; i < 5; i++) {
                    if (arr[i] > max) {
                        max = arr[i];
                    }
                }
                printf("Maximum value = %d\n", max);
                break;

            case 3:
                sum = 0;
                for (int i = 0; i < 5; i++) {
                    sum += arr[i];
                }
                printf("Sum of elements = %d\n", sum);
                break;

            case 4:
                printf("Enter number to search: ");
                scanf("%d", &target);
                found = 0;
                for (int i = 0; i < 5; i++) {
                    if (arr[i] == target) {
                        printf("Target %d found at index %d\n", target, i);
                        found = 1;
                        break;
                    }
                }
                if (!found) {
                    printf("Target %d not found in array\n", target);
                }
                break;

            case 5:
                printf("Array in reverse order: ");
                for (int i = 4; i >= 0; i--) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
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
