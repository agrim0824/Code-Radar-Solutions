#include<stdio.h>
#include<limits.h>
#include <stdio.h>
#include <limits.h>

int findUnsortedSubarray(int arr[], int n) {
    int left = 0, right = n - 1;
    
    // Step 1: Find the first out-of-order index from the left
    while (left < n - 1 && arr[left] <= arr[left + 1]) {
        left++;
    }

    // If the entire array is sorted, return 0
    if (left == n - 1) {
        return 0;
    }

    // Step 2: Find the first out-of-order index from the right
    while (right > 0 && arr[right] >= arr[right - 1]) {
        right--;
    }

    // Step 3: Find the min and max in the unsorted subarray
    int min_val = INT_MAX, max_val = INT_MIN;
    for (int i = left; i <= right; i++) {
        if (arr[i] < min_val) min_val = arr[i];
        if (arr[i] > max_val) max_val = arr[i];
    }

    // Step 4: Expand left boundary
    while (left > 0 && arr[left - 1] > min_val) {
        left--;
    }

    // Step 5: Expand right boundary
    while (right < n - 1 && arr[right + 1] < max_val) {
        right++;
    }

    return right - left + 1;
}
