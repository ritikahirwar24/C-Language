#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "hello";
    int freq[256] = {0};
    int ln = strlen(str);

    // Count frequency of each character
    for (int i = 0; i < ln; i++) {
        freq[(unsigned char)str[i]]++;
    }

    // Find and print the first non-repeating character
    int found = 0;
    for (int i = 0; i < ln; i++) {
        if (freq[(unsigned char)str[i]] == 1) {
            printf("First non-repeating character: %c\n", str[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("No non-repeating character found.\n");
    }

    return 0;
}
