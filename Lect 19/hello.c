#include <stdio.h>

int main() {
    int arr[5] = {1, -4, 6, 7, 3};
    int k = 3; // window size
    int wSum = 0;

    // Step 1: Calculate the first window sum
    for (int i = 0; i < k; i++) {
        wSum += arr[i];
    }

    int maxSum = wSum;

    // Step 2: Slide the window and update max sum
    for (int i = k; i < 5; i++) {
        wSum = wSum + arr[i] - arr[i - k];
        if (wSum > maxSum) {
            maxSum = wSum;
        }
    }

    printf("Maximum sum of subarray of size %d is: %d\n", k, maxSum);

    return 0;
}
