#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function 1: Print first character
void printFirstChar() {
    char name[] = "hiii";
    printf("Name: %c\n", name[0]);
}

// Function 2: Palindrome check
void checkPalindrome() {
    char name[100];
    printf("Enter a word: ");
    scanf("%s", name);

    int ln = strlen(name);
    int isTrue = 1;

    for (int i = 0; i < ln / 2; i++) {
        if (name[i] != name[ln - i - 1]) {
            isTrue = 0;
            break;
        }
    }

    if (isTrue)
        printf("%s is a palindrome.\n", name);
    else
        printf("%s is not a palindrome.\n", name);
}

// Function 3: Input using scanf
void inputWithScanf() {
    char name[50];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("You entered: %s\n", name);
}

// Function 4: Input full name using fgets
void inputWithFgets() {
    char name[50];
    printf("Enter your full name: ");
    getchar(); // clear buffer
    fgets(name, sizeof(name), stdin);
    printf("You entered: %s", name);
}

// Function 5: Frequency of characters
void frequencyCount() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int freq[256] = {0};
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("Character frequencies:\n");
    for (int i = 0; i < 256; i++) {
        if (freq[i] > 0) {
            printf("%c : %d\n", i, freq[i]);
        }
    }
}

// Function 6: Remove duplicates
void removeDuplicates() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    int ln = strlen(str);
    char result[100];
    int index = 0;

    for (int i = 0; i < ln; i++) {
        int isDuplicate = 0;
        for (int j = 0; j < i; j++) {
            if (str[i] == str[j]) {
                isDuplicate = 1;
                break;
            }
        }
        if (!isDuplicate) {
            result[index++] = str[i];
        }
    }

    result[index] = '\0';
    printf("Without duplicates: %s\n", result);
}

// Function 7: Count vowels and consonants
void countVowelsAndConsonants() {
    char str[100];
    printf("Enter a string: ");
    getchar(); // clear buffer
    fgets(str, sizeof(str), stdin);

    int vCount = 0, cCount = 0;
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        char ch = tolower(str[i]);
        if (ch >= 'a' && ch <= 'z') {
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
                vCount++;
            else
                cCount++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vCount, cCount);
}

// Main menu
int main() {
    int choice;

    while (1) {
        printf("\n==============================\n");
        printf(" STRING PROGRAMS MENU\n");
        printf("==============================\n");
        printf("1. Print first character\n");
        printf("2. Check palindrome\n");
        printf("3. Input name using scanf\n");
        printf("4. Input full name using fgets\n");
        printf("5. Count frequency of characters\n");
        printf("6. Remove duplicate characters\n");
        printf("7. Count vowels and consonants\n");
        printf("8. Exit\n");
        printf("==============================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: printFirstChar(); break;
            case 2: checkPalindrome(); break;
            case 3: inputWithScanf(); break;
            case 4: inputWithFgets(); break;
            case 5: frequencyCount(); break;
            case 6: removeDuplicates(); break;
            case 7: countVowelsAndConsonants(); break;
            case 8: 
                printf("Exiting... Goodbye!\n");
                return 0;
            default: 
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}
