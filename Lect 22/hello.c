#include <stdio.h>
#include <string.h>

// 1️⃣ Find first non-repeating character
void findFirstNonRepeating(char str[]) {
    int freq[256] = {0};
    int ln = strlen(str);

    for (int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < ln; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            return;
        }
    }
    printf("No non-repeating character found.\n");
}

// 2️⃣ Remove target character from string
void removeCharacter(char str[], char target) {
    char newStr[100];
    int j = 0;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != target) {
            newStr[j++] = str[i];
        }
    }
    newStr[j] = '\0';
    printf("After removing '%c': %s\n", target, newStr);
}

// 3️⃣ Sort string alphabetically
void sortString(char str[]) {
    int ln = strlen(str);
    for (int i = 0; i < ln - 1; i++) {
        for (int j = i + 1; j < ln; j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
    printf("Sorted string: %s\n", str);
}

// 4️⃣ Check if substring exists
void checkSubstring(char str[], char subStr[]) {
    if (strstr(str, subStr) != NULL) {
        printf("Substring \"%s\" found in \"%s\" ✅\n", subStr, str);
    } else {
        printf("Substring \"%s\" not found in \"%s\" ❌\n", subStr, str);
    }
}

// 5️⃣ Find most frequent character
void findMostFrequentChar(char str[]) {
    int freq[256] = {0};
    int ln = strlen(str);
    char result = '\0';
    int max = 0;

    for (int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;
    }

    for (int i = 0; i < ln; i++) {
        if (freq[(unsigned char)str[i]] > max) {
            max = freq[(unsigned char)str[i]];
            result = str[i];
        }
    }
    printf("Most frequent character: %c → %d times\n", result, max);
}

int main() {
    char str1[] = "hello";
    char str2[] = "bca";
    char str3[] = "abcbjfbebf";

    // 1️⃣ First non-repeating
    findFirstNonRepeating(str1);

    // 2️⃣ Remove specific character
    removeCharacter(str1, 'e');

    // 3️⃣ Sort string
    sortString(str2);

    // 4️⃣ Check substring
    checkSubstring("abcdef", "abc");

    // 5️⃣ Most frequent character
    findMostFrequentChar(str3);

    return 0;
}
