#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        if ((i == 0 || arr[i] > arr[i - 1]) && 
            (i == n - 1 || arr[i] > arr[i + 1])) {
            return arr[i]; // Found the first peak element
        }
    }
    return -1; // No peak element found
}

int main() {
    int n;
    scanf("%d", &n); // Input size of the array
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
    }

    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak); // Output the first peak element or -1
    return 0;
}
