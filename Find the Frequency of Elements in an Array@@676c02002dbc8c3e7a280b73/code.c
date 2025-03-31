#include <stdio.h>

int main() {
    int n, i, j;
    scanf("%d", &n); // Input the size of the array
    int arr[n], freq[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Input array elements
        freq[i] = -1; // Initialize frequency array
    }

    for (i = 0; i < n; i++) {
        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0; // Mark duplicate elements as 0 in frequency array
            }
        }
        if (freq[i] != 0) {
            freq[i] = count; // Store frequency for unique elements
        }
    }

    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d %d\n", arr[i], freq[i]); // Output each unique element and its frequency
        }
    }

    return 0;
}
