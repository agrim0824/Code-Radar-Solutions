#include <stdio.h>
#include <limits.h>

int main() {
    int n, i;

    // Input the number of elements in the array
    scanf("%d", &n);

    // If the array size is less than 2, output -1
    if (n < 2) {
        printf("-1\n");
        return 0;
    }

    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize the largest and second largest elements
    int largest = INT_MIN, second_largest = INT_MIN;

    // Traverse the array to find the largest and second largest elements
    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] < largest) {
            second_largest = arr[i];
        }
    }

    // If no second largest element exists, output -1
    if (second_largest == INT_MIN) {
        printf("-1\n");
    } else {
        printf("%d\n", second_largest);
    }

    return 0;
}
