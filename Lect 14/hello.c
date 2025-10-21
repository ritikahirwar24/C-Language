#include <stdio.h>

int maxSubarraySum(int arr[], int n, int k) {
    if (k > n || k <= 0) {
        printf("Invalid window size.\n");
        return 0;
    }

    int windowSum = 0;
    for (int i = 0; i < k; i++) {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    for (int j = k; j < n; j++) {
        windowSum = windowSum + arr[j] - arr[j - k];
        if (windowSum > maxSum) {
            maxSum = windowSum;
        }
    }

    return maxSum;
}

int main() {
    int arr[] = {1, 2, 3, 5, 6, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    int result = maxSubarraySum(arr, n, k);
    printf("Maximum sum of %d consecutive elements is: %d\n", k, result);

    return 0;
}