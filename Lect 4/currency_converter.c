#include <stdio.h>

int main() {
    int amount;
    char ch;

    printf("Enter amount in INR: ");
    scanf("%d", &amount);

    printf("\nConvert to:\n");
    printf("$  → USD\n");
    printf("E  → Euro\n");
    printf("Y  → Yen\n");
    printf("Enter your choice: ");
    scanf(" %c", &ch);   // space before %c ignores leftover newline

    switch (ch) {
        case '$':
            printf("\n%.2f USD\n", (float)amount / 87);
            break;

        case 'E':
            printf("\n%.2f Euro\n", (float)amount / 92);
            break;

        case 'Y':
            printf("\n%.2f Yen\n", (float)amount / 0.55);
            break;

        default:
            printf("\nInvalid currency choice!\n");
            break;
    }

    return 0;
}