
#include <stdio.h>

int Bsearch() {
    int arr[6] = {1, 5, 6, 7, 8, 9};  // sorted array
    int target = 6;                   // element to search
    int s = 0;
    int end = 5;
    
    while (s <= end) {
        int mid = (s + end) / 2;      // middle index
        if (arr[mid] == target) {
            printf("Element %d found at index %d\n", target, mid);
            return mid;               // return index
        }
        else if (arr[mid] < target) {
            s = mid + 1;              // search right half
        }
        else {
            end = mid - 1;            // search left half
        }
    }
    printf("Element %d not found\n", target);
    return -1;
}

int main() {
    Bsearch();
    return 0;
}