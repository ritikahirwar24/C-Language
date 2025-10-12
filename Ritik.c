#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    int f = arr[0];   // store first element

    for (int i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];   // shift elements left
    }
    arr[4] = f;   // put first element at last

    // print rotated array
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}