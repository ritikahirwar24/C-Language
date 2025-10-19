#include <stdio.h>

int main() {
    int arr[5] = {-10, 20, 30, -40, 50};
    int choice;

    do {
        printf("\n=== ARRAY OPERATIONS MENU ===\n");
        printf("1. Print Array\n");
        printf("2. Left Rotate Array by One Position\n");
        printf("3. Check if Array is Palindrome\n");
        printf("4. Find Pair with Given Sum\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: { // Print array
                printf("Array elements: ");
                for (int i = 0; i < 5; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 2: { // Left rotation
                int f = arr[0];
                for (int i = 0; i < 4; i++) {
                    arr[i] = arr[i + 1];
                }
                arr[4] = f;

                printf("Array after left rotation: ");
                for (int i = 0; i < 5; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            }

            case 3: { // Palindrome check
                int check = 1;
                for (int i = 0; i < 5 / 2; i++) {
                    if (arr[i] != arr[5 - 1 - i]) {
                        check = 0;
                        break;
                    }
                }
                if (check == 1)
                    printf("Array is palindrome\n");
                else
                    printf("Array is not palindrome\n");
                break;
            }

            case 4: { // Pair sum
                int k;
                printf("Enter target sum: ");
                scanf("%d", &k);
                int found = 0;
                for (int i = 0; i < 5; i++) {
                    for (int j = i + 1; j < 5; j++) {
                        if (arr[i] + arr[j] == k) {
                            printf("Pair found at indices (%d, %d): %d + %d = %d\n",
                                   i, j, arr[i], arr[j], k);
                            found = 1;
                        }
                    }
                }
                if (!found)
                    printf("No pair found with sum %d\n", k);
                break;
            }

            case 0:
                printf("Exiting program...\n");
                break;

            default:
                printf("Invalid choice! Please try again.\n");
        }

    } while (choice != 0);

    return 0;
}
